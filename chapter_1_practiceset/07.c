#include <stdio.h>

int main()
{
    int i, n;

    printf("the value of n is:\n");
    scanf("%d", &n);

    for (i = 1; i<=n; i++)
    {
        if (i % 3 == 0)
        {
            printf("the required values are:%d\n", i);
        }
        if (i % 5 == 0)
        {
            printf("the required values are :%d\n", i);
        }
    }

    return 0;
}