#include <stdio.h>

int main()
{
    int marks[5];

    printf("enter the marks of the 5 students:\n");

    for (int i = 0; i <= 4; i++)
    {
        scanf("%d", &marks[i]);
    }
    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("the marks at index %d is %d\n", i, marks[i]);
    }
    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("the address of  index %d is %u\n", i, &marks[i]); // learning is that the elements of same array are stored in comtiguous blocks(memory locations)
    }
    printf("\n");

    int *ptr1 = &marks[0];
    ptr1--;
    for (int i = 0; i < 5; i++)
    
    {
        printf("the address of %d element(index %d) of the array is %u\n", (i + 1), i, (ptr1) += 1);
    }

    printf("\n");

    printf("the address of the  array whose name is marks[5] is %u and  the address of 1st element of the array is %u and they both are same\n", &marks,&marks[0]); 
    //  address of whole array is same as the address of the 1st element of the arary
    return 0;
}