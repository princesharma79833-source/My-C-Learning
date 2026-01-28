/*Create a three–dimensional array and print the address of its elements in
increasing order.*/

#include <stdio.h>

int main()
{
    int Three_d_array[2][3][2];
    printf("enter the elements of the three d array:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                scanf("%d", &Three_d_array[i][j][k]);
            }
        }
    }

    int *ptr = &Three_d_array[0][0][0];
    for (int i = 0; i < 12; i++)
    {
        printf("the adddress of the %d element of the three d array whose value is %d is %u\n",i+1, *(ptr+i), ptr + i);
    }

    return 0;
}