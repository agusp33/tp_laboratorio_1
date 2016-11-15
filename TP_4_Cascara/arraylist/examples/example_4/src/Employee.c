#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../inc/Employee.h"

int compareEmployee(void* pEmployeeA,void* pEmployeeB)
{
    if(((Employee*)pEmployeeA)->salary > ((Employee*)pEmployeeB)->salary)
    {
        return 1;
    }
    if(((Employee*)pEmployeeA)->salary < ((Employee*)pEmployeeB)->salary)
    {
        return -1;
    }
    return 0;
}

void printEmployee(Employee* p)
{
    printf("Nombre:%s Salario:%.2f\r\n",p->name,p->salary);
}

/** \brief Set this employee the values recived as parameters
 * \param pEmployee employee*
 * \param id int
 * \param name[] char
 * \param lastName[] char
 * \param salary float
 * \param sector int
 * \return int Return (-1) if Error [NULL pointer] - (0) if Ok
 */
Employee* newEmployee(int id, char name[],char lastName[],float salary,int sector)
{
    Employee* returnAux = NULL;
    Employee* pEmployee = malloc(sizeof(Employee));

    if(pEmployee != NULL)
    {
        pEmployee->id = id;
        strcpy(pEmployee->name,name);
        strcpy(pEmployee->lastName,lastName);
        pEmployee->salary = salary;
        pEmployee->sector = sector;
        pEmployee->isEmpty = 0;
        returnAux = pEmployee;
    }

    return returnAux;

}
void employee_delete(Employee* this)
{
    free(this);
}

int employee_setId(Employee* this, int id)
{
    int retorno = -1;
    if(this != NULL && id > 0)
    {
        retorno = 0;
        this->id = id;
    }
    return retorno;
}

int employee_getId(Employee* this)
{
    int retorno = -1;
    if(this != NULL)
    {
        retorno = this->id;
    }
    return retorno;
}

int employee_setName(Employee* this, char* name)
{
    int retorno = -1;
    if(this != NULL && strlen(name) > 0)
    {
        retorno = 0;
        strncpy(this->name,name,50);
    }
    return retorno;
}

char* employee_getName(Employee* this)
{
    char* retorno = NULL;
    if(this != NULL)
    {
        retorno = this->name;
    }
    return retorno;
}

int employee_setLastName(Employee* this, char* lastName)
{
    int retorno = -1;
    if(this != NULL && strlen(lastName) > 0)
    {
        retorno = 0;
        strncpy(this->lastName,lastName,50);
    }
    return retorno;
}

char* employee_getLastName(Employee* this)
{
    char* retorno = NULL;
    if(this != NULL)
    {
        retorno = this->lastName;
    }
    return retorno;
}
int employee_setSalary(Employee* this, int salary)
{
    int retorno = -1;
    if(this != NULL && salary > 0)
    {
        retorno = 0;
        this->salary = salary;
    }
    return retorno;
}

int employee_getSalary(Employee* this)
{
    int retorno = -1;
    if(this != NULL)
    {
        retorno = this->salary;
    }
    return retorno;
}

int employee_setSector(Employee* this, int sector)
{
    int retorno = -1;
    if(this != NULL && sector > 0)
    {
        retorno = 0;
        this->sector = sector;
    }
    return retorno;
}

int employee_getSector(Employee* this)
{
    int retorno = -1;
    if(this != NULL)
    {
        retorno = this->sector;
    }
    return retorno;
}

int employee_setIsEmpty(Employee* this, int isEmpty)
{
    int retorno = -1;
    if(this != NULL && isEmpty > 0)
    {
        retorno = 0;
        this->isEmpty = isEmpty;
    }
    return retorno;
}

int employee_getIsEmpty(Employee* this)
{
    int retorno = -1;
    if(this != NULL)
    {
        retorno = this->isEmpty;
    }
    return retorno;
}
