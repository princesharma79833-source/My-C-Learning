#include <stdio.h>

int main()
{
    int i, n;                                //Write a program to print multiplication table of a given number n.
    printf("the value of n is :");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        printf("%dx%d=%d\n", n, i, n * i);
    }
    return 0;
}