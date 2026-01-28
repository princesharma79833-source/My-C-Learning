/*ques3. Write a program to create an array of 10 integers and store multiplication table of
        5 in it.
wues4. Repeat problem 3 for a general input provided by the user using scanf.
*/

#include <stdio.h>

int main() {
    int arr[10];
    int n;
    printf("enter the value(n) whose table you want to store in array: ");
    scanf("%d",&n);
    for (int i = 0; i < 10; i++)
    {
        printf("the value of %d x %d is  %d\n", n , (i+1), arr[i]=n*(i+1));
    }
    return 0;
}