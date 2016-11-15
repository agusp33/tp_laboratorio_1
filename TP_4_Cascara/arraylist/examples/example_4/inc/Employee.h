/*
    utest example : Unit test examples.
    Copyright (C) <2016>  <Mauricio Davila>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef __EMPLOYEE
#define __EMPLOYEE
struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;

}typedef Employee;
#endif // __EMPLOYEE

int compareEmployee(void* pEmployeeA,void* pEmployeeB);
void printEmployee(Employee* p);
Employee* newEmployee(int id, char name[],char lastName[],float salary,int sector);
void employee_delete(Employee* this);
int employee_setId(Employee* this, int id);
int employee_getId(Employee* this);
int employee_setName(Employee* this, char* name);
char* employee_getName(Employee* this);
int employee_setLastName(Employee* this, char* lastName);
char* employee_getLastName(Employee* this);
int employee_setSalary(Employee* this, int salary);
int employee_getSalary(Employee* this);
int employee_setSector(Employee* this, int sector);
int employee_getSector(Employee* this);
int employee_setIsEmpty(Employee* this, int isEmpty);
int employee_getIsEmpty(Employee* this);


