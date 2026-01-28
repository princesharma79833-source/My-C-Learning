#include <stdio.h>

int main()
{

    /* Write a program to print natural numbers from 10 to 20 when initial loop
counter is initialized to 0.*/


    int i = 0;
    printf("natural nos. from 10 to 20 are:");

        while(i <= 10)
    {
        printf("%d\n", i + 10);
        i++;
    }
    return 0;
}



/*
second way of doing this is:

int i=0;

while(i<=20)
{  if(i>=10)
  {
  printf("the value of i is %d",i)
  } 
  i++;
}
  */