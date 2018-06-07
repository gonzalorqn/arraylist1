#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"


int parserEmployee(FILE* pFile , ArrayList* pArrayListEmployee)
{
    pFile = fopen("data.csv","r");
    if(pFile == NULL)
     {
         printf("El archivo no existe");
         exit(EXIT_FAILURE);
     }


     fclose(pFile);

    return 0;
}
