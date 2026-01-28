#include <stdio.h>

int main() {

/*1. Write a program to print the address of a variable. Use this address to get the
value of the variable.*/

int a=6;
int *b=&a;


printf("the address of integer variable a is : %p\n",b);
printf("the address of integer variable a is : %p\n",&a);

printf("the value stored at address b is %d\n",*b);
printf("the value stored at address b is %d\n",*(&a));

return 0;
}