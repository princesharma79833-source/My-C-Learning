#include <stdio.h>

/* 3. Write a program to change the value of a variable to ten times of its current
value.*/
int change_10_times(int *a);
int change_10_times(int *a)
{
    int temp = *a;
    *a = 10 * temp;
    printf("the value after making it ten times is: %d", *a);
    return 0;
}

int main()
{

    int x = 193;
    change_10_times(&x);
    

    return 0;
}