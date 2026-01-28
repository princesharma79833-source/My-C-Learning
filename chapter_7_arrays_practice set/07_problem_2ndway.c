#include <stdio.h>

int main()
{
    int multi_dim_array[3][10];

    for (int j = 0; j < 10; j++)
    {
        multi_dim_array[0][j] = 2 * (j + 1);
        multi_dim_array[1][j] = 7 * (j + 1);
        multi_dim_array[2][j] = 9 * (j + 1);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", multi_dim_array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
