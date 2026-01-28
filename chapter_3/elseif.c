#include <stdio.h>

int main()
{
    int age;
    printf("enter the age:");
    scanf("%d", &age);

    if (age > 60)
    {
        printf("you can drive and you are a senior citizen");
    }
    else if (age > 40)
    {
        printf("you can drive and you are an elder");
    }
    else if (age > 18)
    {
        printf("you can drive and you are an adult");
    }
    else
    {
        printf("you cannot drive");                   /* last wala else optional hota hai 
                                                                 and executed only when all the above conditiond fails*/
    }
    return 0;
}