/*1. Write a program using function to find average of three numbers.*/

#include <stdio.h>

float average(int, int, int);

float average(int a, int b, int c)
{
    return (a + b + c) / 3.00;
}

int main()

{
    int a;
    int b;
    int c;

    printf("ENTER THE THREE NUMBERS WHOSE AVERAGE IS TO BE FIND OUT:\n");
    scanf("%d %d %d", &a, &b, &c);

    printf("the average of these nos. is %.2f\n", average(a, b, c));

    return 0;
}