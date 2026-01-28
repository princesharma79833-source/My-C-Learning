/*7. Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7
and 9 respectively.*/



// isss ques ko maine do tarike se kiya hai....print only with help of loops..........yaa fir ek multidimensional array mein store karake

#include <stdio.h>

int main()
{
    int multi_dim_array[3][10];

    for (int i = 0; i < 3; i++)
    {

        if (i == 0)
        {

            for (int j = 0; j < 10; j++)
            {
                multi_dim_array[0][j] = 2 * (j + 1);

                // printf("2 x %d = %d     ", (j + 1), 2 * (j + 1));
            }
        }
        // printf("\n");

        if (i == 1)
        {
            for (int j = 0; j < 10; j++)
            {
                multi_dim_array[i][j] = 7 * (j + 1);

               //  printf("7 x %d = %d     ", (j + 1), 7 * (j + 1));
            }
        }
        // printf("\n");

        if (i == 2)
        {
            for (int j = 0; j < 10; j++)
            {

                multi_dim_array[2][j] = 9 * (j + 1);

               // printf("9 x %d = %d     ", (j + 1), 9 * (j + 1));
            }
        }
       //  printf("\n");
    }

    printf("\n");

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
