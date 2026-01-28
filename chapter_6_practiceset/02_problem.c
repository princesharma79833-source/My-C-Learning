/*2. Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
a function and print its address. Are these addresses same? Why?*/

#include <stdio.h>

int check(int* a)
{
    printf("the value of  a is: %d\n", a);
    printf("the value stored at a is: %d\n", *a);
    return 0;
}



int main() {
    int i=44;
    int* ptr=&i;

    

    printf("the address of i is %d\n", &i);

    check(ptr);
    

    return 0;
}