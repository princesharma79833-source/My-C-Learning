/*QUES7. Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7
and 9 respectively.
QUES 8. Repeat problem 7 for a custom input given by the user.*/


#include <stdio.h>

int main() {
    int x,y,z;
    printf("enter x,y and z respectively:");
    scanf("%d %d %d",&x,&y,&z);

    int  multi_dim_array[3][10];


    for (int j = 0; j < 10; j++)
    {
        multi_dim_array[0][j] = x * (j + 1);
        multi_dim_array[1][j] = y * (j + 1);
        multi_dim_array[2][j] = z * (j + 1);
    }

    printf("\n");
    printf("THE REQUIRED OUTPUT IS\n");
    
    

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