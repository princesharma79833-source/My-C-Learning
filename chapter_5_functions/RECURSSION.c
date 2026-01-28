#include <stdio.h>

/*Recurssion: A function calling itself until the base condition appears */

int factorial(int);
int factorial(int a)
{
    if (a == 1 || a == 0) // BASE CASE ORR BASE CONDITION...
    {
        return 1;
    }
    return a * factorial(a - 1);
}

int main()
{

    int p = 70;
    printf("The factorial of %d is %d\n", p, factorial(p));

    return 0;
}