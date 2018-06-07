#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"
#include "Employee.h"

/****************************************************
    Menu:
        1. Parse del archivo data.csv
        2. Listar Empleados
        3. Ordenar por nombre
        4. Agregar un elemento
        5. Elimina un elemento
        6. Listar Empleados (Desde/Hasta)
*****************************************************/


int main()
{
    int index;
    int auxInt;
    int i;
    Employee* eAux;

    ArrayList* lista;
    lista = al_newArrayList();
    Employee* e1;
    e1 = (Employee*) malloc(sizeof(Employee));

    Employee* e2;
    e2 = (Employee*) malloc(sizeof(Employee));

    e1->id = 666; //reemplazar por un setter
    strcpy(e1->name, "Juan");
    strcpy(e1->lastName, "Gomez");
    e1->isEmpty = 1;

    e2->id = 777; //reemplazar por un setter
    strcpy(e2->name, "Jose");
    strcpy(e2->lastName, "Perez");
    e2->isEmpty = 1;

    index = al_add(lista, e1);
    index = al_add(lista, e2);

    index = al_len(lista);

    printf("Cantidad de elementos: %d\n",index);

    auxInt = al_sort(lista, employee_compare(e1,e2),0);
    printf("%d\n",auxInt);

    for(i=0;i<index;i++)
    {
        eAux = (Employee*) al_get(lista,i);

        employee_print(eAux);
    }


    return 0;
}
