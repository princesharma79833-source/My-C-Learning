#include <stdio.h>

int main()
{
    int i, n;
    printf("the value of n is :");
    scanf("%d", &n);

    for (i = n; i; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}