#include <stdio.h>

int main()
{
    int i = 1, n;                    //Write a program to print multiplication table of a given number n.
    printf("Enter the value of n:");
    scanf("%d", &n);

    do
    {
        printf("%d x %d=%d\n", n, i, n * i);
        i++;
    } while (i <= 10);
    return 0;
}


