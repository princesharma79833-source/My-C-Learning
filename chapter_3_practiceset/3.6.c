#include <stdio.h>

int main()
{
    int year;
    printf("enter the year:");
    scanf("%d", &year);
     /* Write a program to find whether a year entered by the user is a leap year or not.
     Take year as an input from the user.*/
   
     if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("this is the leap year");
    }
    else
    {
        printf("this is not the leap year");
    }

    return 0;
}