#include <stdio.h>

int main()
{
    if (1)
    {
        printf("this if is executed"); // because non zero value is considered as true
    }
    if (9.99)
    {
        printf("\nthis if is also executed"); // because non zero value is considered as true
    }
    if (0.01)
    {
        printf("\nthis if is also executed"); // because non zero value is considered as true
    }
    if ('g')
    {
        printf("\nthis if is also executed"); // because non zero value is considered as true
    }
    if (-10000000)
    {
        printf("\nthis if is also executed"); // because non zero value is considered as true
    }
    if (0)
    {
        printf("\nthis if is not executed"); // this is not executed as 0 is considered as false
    }
    if ('\0')
    {
        printf("\nthis if is not executed"); // this is not executed as '\0' (null character) has ASCII value 0 which is considered as false
    }
     
     

    return 0;
}