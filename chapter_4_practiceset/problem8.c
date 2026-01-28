#include <stdio.h>

int main()
{
    int i, n;
    long long factorial = 1;           //Write a program to find factorial of a given number n.
    printf("Enter the value of n:"); 
    scanf("%d", &n);

    for (i =n; i; i--)
    {
        factorial = factorial * i;
    }

   
    printf("%lld\n", factorial);
    
    return 0;
}