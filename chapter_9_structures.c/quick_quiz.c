/*/*Quick Quiz: Write a program to store the details of 3 employees from user defined data.*/
#include <stdio.h>
#include <string.h>

struct employee
{
    char name[20];
    int code;
    float salary;
};

int main()
{
    struct employee e1, e2, e3;
    {
        printf("Enter the name of employee e1:\n");
        scanf("%s", &e1.name);
        printf("Enter the code of employee e1:\n");
        scanf("%d", &e1.code);
        printf("Enter the salary of employee e1:\n");
        scanf("%f", &e1.salary);
        printf("%s  %d  %.2f\n", e1.name, e1.code, e1.salary);

        printf("Enter the name of employee e2:\n");
        scanf("%s", &e2.name);
        printf("Enter the code of employee e2:\n");
        scanf("%d", &e2.code);
        printf("Enter the salary of employee e2:\n");
        scanf("%f", &e2.salary);
        printf("%s  %d  %.2f\n", e2.name, e2.code, e2.salary);

        printf("Enter the name of employee e3:\n");
        scanf("%s", &e3.name);
        printf("Enter the code of employee e3:\n");
        scanf("%d", &e3.code);
        printf("Enter the salary of employee e3:\n");
        scanf("%f", &e3.salary);
        printf("%s  %d  %.2f\n", e3.name, e3.code, e3.salary);
    };

    return 0;
}