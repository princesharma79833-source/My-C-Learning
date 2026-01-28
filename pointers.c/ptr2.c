#include <stdio.h>

int main() {
    int a=5,b=6;                             //program to swap the values of a and b in simple way using a temp variable
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("the value of a and b after the swapping are %d and %d", a,b);
    return 0;
}