#include <stdio.h>

int main()
{
    int i, n; // Write a program to print multiplication table of 10 in reversed order.
    printf("the value of n is :");
    scanf("%d", &n);

    for (i = 10; i; i--)
    {
        printf("%dx%d=%d\n", n, i, n * i);
    }
    return 0;
}