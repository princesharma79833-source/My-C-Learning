/*1. Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
to the third element where ptr is a pointer pointing to the first element of the
array.*/

#include <stdio.h>

int main()
{
    int arr[10] = {4, 5, 6, 1, 2, 3, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++)
    {
        printf("the %d element of this array is %d\n", (i + 1), arr[i]);
    }

    int *ptr = arr;
    printf("\n");
    printf("the first element of this array is %d and its address is %u\n", *(ptr), ptr);
    printf("the second element of this array is %d and its address is %u\n", *(ptr + 1), ptr + 1);
    printf("the third element of this array is %d and its address is %u\n", *(ptr + 2), ptr + 2);
    printf("the fourth element of this array is %d and its address is %u\n", *(ptr + 3), ptr + 3);
    printf("the fifth element of this array is %d and its address is %u\n", *(ptr + 4), ptr + 4);
    printf("the sixth element of this array is %d and its address is %u\n", *(ptr + 5), ptr + 5);
    printf("the seventh element of this array is %d and its address is %u\n", *(ptr + 6), ptr + 6);
    printf("the eighth element of this array is %d and its address is %u\n", *(ptr + 7), ptr + 7);
    printf("the ninth element of this array is %d and its address is %u\n", *(ptr + 8), ptr + 8);
    printf("the tenth element of this array is %d and its address is %u\n", *(ptr + 9), ptr + 9);

    return 0;
}