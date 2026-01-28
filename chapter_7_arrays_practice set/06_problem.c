/*Write a program containing functions which counts the number of positive
integers in an array.*/

#include <stdio.h>


int count_no_of_positive_integers(int* arr, int n);
int count_no_of_positive_integers(int* arr, int n)
{
    int count =0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            count++;
        }
    }
    return count;
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

    printf("\n");
    

    int c = count_no_of_positive_integers(arr, n);
    printf("The no. of positive integers in the given array is: %d\n",c);
    

    
    return 0;
}