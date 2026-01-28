/*5. Write a program containing a function which reverses the array passed to it.*/

#include <stdio.h>

void printarray(int *array)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }
}
/*aise bhi kr skte hain.....*/
/*void reverse_array(int *array);
void reverse_array(int *array)
{
    int temp[5];
    for (int i = 0; i < 5; i++)
    {
        temp[i] = array[4 - i];
        
    }
    for (int i = 0; i < 5; i++)
    {
        array[i] = temp[i];
        
    } 
}
*/    

 
/* aise bhi kr skte hain.....*/

 void reverse_array(int *array);
void reverse_array(int *array)
{
   int temp;
    for (int i = 0; i < 5/2; i++)
    {
        temp = array[i];
        array[i] = array[5-1-i];
        array[5-1-i]=temp;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    printarray(arr);
    printf("\n");

    reverse_array(arr);
    printf("\n");

    printarray(arr);

    return 0;
}
