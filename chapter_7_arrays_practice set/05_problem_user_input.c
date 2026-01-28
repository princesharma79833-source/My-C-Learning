#include <stdio.h>

void printarray(int *array, int n)           // n is the no_of_elements_in_array
{
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}

void reverse_array(int * array, int n );
void reverse_array(int *array, int n)
{  
    
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[i] = array[(n-1)-i];
        
    }
    for (int i = 0; i < n; i++)
    {
        array[i] = temp[i];
        
    }
    
}

int main() {
    int n;
    printf("enter n:\n");
    scanf("%d",&n);



    int arr[n];
    printf("enter the elements of the arary\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        
        
    }

    printarray(arr, n);
    printf("\n");

    reverse_array(arr,n);
    printf("\n");

    printarray(arr, n);

   



    
    return 0;
}