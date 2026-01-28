#include <stdio.h>

int main()
{
    int age;
    printf("enter the age:");
    scanf("%d", &age);

    if (age < 15)
    {
        printf("your age is less than 15");
    }
    if(age%5==0)
    {
        printf("\nyour age is the multiple of 5");
    }
    return 0;
}