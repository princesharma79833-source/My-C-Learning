/*6. Write a program to print the value of a variable i by using “pointer to pointer” type
of variable.*/

#include <stdio.h>

int main() {
    int i=4;
    int *j=&i;
    int**k=&j;
    
    printf("the value stored at the address j is %d\n",i);
    printf("the value stored at the adress j is %d\n", *j);
    printf("the value stored at the adress j is %d\n", **k);
    printf("\n");
    printf("the address where the value of i stored is %d\n",&i);
    printf("\n");
    printf("the value stored at the adress k is %d\n", *k);
    printf("the value stored at the adress k is %d\n", j);
    return 0;
}