#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"


int employee_compare(void* pEmployeeA,void* pEmployeeB)
{
    int retorno;
    Employee* e1 = (Employee*) pEmployeeA;
    Employee* e2 = (Employee*) pEmployeeB;

    retorno = strcmp(e1->name, e2->name);

    return retorno;
}


void employee_print(Employee* this)
{
    printf("%d -- %s -- %s\n", this->id, this->name, this->lastName);
}


Employee* employee_new(void)
{

    Employee* returnAux = NULL;
    returnAux = (Employee*) malloc(sizeof(Employee));

    return returnAux;

}

void employee_delete(Employee* this)
{


}

int employee_setId(Employee* this, int id)
{

    return 0;

}

int employee_getId(Employee* this)
{

    return 0;

}


