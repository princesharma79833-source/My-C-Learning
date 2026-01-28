#include <stdio.h>

int main()
{
    int a;
    printf("enter a:\n");
    scanf("%d", &a);

    int b[a];
    printf("enter the %d numbers whose table you want to store in a diff 2 d array:\n", a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("\n");
    printf("the elements of array named b are :");
    for (int i = 0; i < a; i++)
    {
        printf("%d ", b[i]);
    }

    int table[a][10];

    for (int i = 0; i <a; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            table[i][j] = b[i] * (j + 1);
        }
    }

    printf("\n");
    printf("THE REQUIRED OUTPUT IS\n");

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", table[i][j]);
        }
        printf("\n");
    }

    return 0;
}
