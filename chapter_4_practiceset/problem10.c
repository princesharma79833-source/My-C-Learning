#include <stdio.h>

int main()
{
    int i, n;
    int x = 0;
    printf("enter a number n:");
    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        x = 1;
        printf("the no. is not prime");
    }
    else
    {

        for (i = 2; i < n; i++)
            if (n % i == 0 && n != 2)
            {
                x = 1;
                break;
            }

        if (x)
        {
            printf("the no. is not prime");
        }

        else
        {
            printf("the no. is prime");
        }
    }

    return 0;
}