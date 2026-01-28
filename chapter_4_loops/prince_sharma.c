#include <stdio.h>

/*Write a program to sum all the numbers from 1 to 100 except those divisible by 5.
Use continue to skip numbers divisible by 5 during the summation.*/

int main()
{

    int sum = 0;

    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 5 == 0)
        {
            continue;
        }
        sum = sum + i;
    }
    printf("the sum of numbers from 1 to 100 except those divisible by 5 is %d\n", sum);
    return 0;
}