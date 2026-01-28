#include <stdio.h>

int main()
{
    int i = 2, n;
    int x = 0;
    printf("enter a number n:");
    scanf("%d", &n);

    if (n == 0 || n == 1)
    {

        printf("the no. is not prime");
    }
    else
    {

        do

        {
            if (n % i == 0 && n != 2)
            {
                x = 1;

                break;
            }
            i++;
        } while (i < n);

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