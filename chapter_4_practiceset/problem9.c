#include <stdio.h>

int main()
{
    int i = 1, n;
    long long factorial = 1;
    printf("Enter the value of n:");
    scanf("%d", &n);
    
    while (i <= n)
    {
        factorial = factorial * i;
        i++;
    }
    printf("%lld", factorial);
    return 0;
}