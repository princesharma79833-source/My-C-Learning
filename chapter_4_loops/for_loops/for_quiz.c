#include <stdio.h>

int main()
{
    int n;

    printf("the value of n is:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("the value of i is %d\n", i);
    }
    return 0;
}