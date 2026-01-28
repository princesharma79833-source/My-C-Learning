// other ways of initializing the array

#include <stdio.h>

int main()
{
    int marks1[5] = {45, 85, 99, 75, 83}; // when we know the no of  elements in the array and also know that no of elemennts in the array are not too much
    for (int i = 0; i < 5; i++)
    {
        printf("The marks1 at %d index of this array is %d\n", i, marks1[i]);
    }

    printf("\n");

    int marks2[] = {4, 8, 9, 13, 6}; // when we  do not know the no of  elements in the array byt know that no of elemennts in the array are not too much
    for (int i = 0; i < 5; i++)
    {
        printf("The marks2 at %d index of this array is %d\n", i, marks2[i]);
    }

    return 0;
}