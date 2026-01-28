#include <stdio.h>
// void passing_array2fn(int name_of_array[], int b); OR
void passing_array2fn(int *name_of_array, int a);

void passing_array2fn(int *name_of_array, int a)
{
    int *ptr1 = &name_of_array[0];
    for (int i = 0; i < 3; i++)
    {

        printf("the value of %d index of the array is %d\n", i, *(ptr1));
        printf("the value of %d index after incrementing by a is %d\n", i, *ptr1 + a);
        ptr1++;
    }
}

void change_array_elem(int *name_of_array);
void change_array_elem(int *name_of_array)
{
    printf("\n");
    int *ptr = name_of_array;
    for (int i = 0; i < 3; i++)
    {
        *ptr += 3;
        printf("now the value of %d index of the array is %d\n", i, *ptr);
        ptr++;
    }
}

int main()
{

    int marks[3] = {9, 3, 12};
    int v = 8;
    passing_array2fn(marks, v);

    printf("\n");
    int *ptr1 = &marks[0];
    for (int i = 0; i < 3; i++)
    {

        printf("the value of %d index of the array is %d\n", i, *(ptr1));
        ptr1++;
    }

    change_array_elem(marks);
    return 0;
}