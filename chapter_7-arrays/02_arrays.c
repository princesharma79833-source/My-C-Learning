#include <stdio.h>

int main()
{
    int array[15];                     // 15 spaces will be reserved to store the 15 integers
  
    printf("Enter the marks of the 15 students:\n");

    for (int i = 0; i < 15; i++)
    {
        scanf("%d\n", &array[i]);
    }

    for (int i = 0; i < 15; i++)
    {
        printf("The marks of student %d is %d\n", (i + 1), array[i]);
        
    }

    return 0;
}