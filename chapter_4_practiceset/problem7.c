#include <stdio.h>

int main()
{
    int n = 8;
    int i;
    int sum = 0;
    int a;

    for (i = 1; i < 11; i++)
    {
        a = n * i;
        sum = sum + a;
    }

    printf("%d", sum);
    return 0;
}