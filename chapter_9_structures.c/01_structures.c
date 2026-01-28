/*a structure in C is a collection of variables of different types under a single name*/

#include <stdio.h>
#include <string.h> // we have to include this header file whenever our data structure contains a string

struct employee // This declares a new user defined data type!
{
    int employee_code;
    float salary;
    char name[50];
}; // semicolon is imp

int main()
{
    struct employee employee1; // creating a structure variable
    employee1.salary = 200000.00;
    employee1.employee_code = 4511;
    strcpy(employee1.name, "PRINCE");

    return 0;
}