#include <stdio.h>

int sum(int , int );        // function prototype declaration

int sum(int x,int y) {                        // function definition
    printf("the sum is %d\n",x+y);
    return x+y;
}

int main() {

    int a,b;
    printf("enter the value of a and b:\n");
    scanf("%d %d", &a, &b);

    sum(a,b);    // function call


    int a1,b1;
    printf("enter the value of a1 and b1:\n");
    scanf("%d %d", &a1, &b1);

    sum(a1,b1);    // function call
    

    int a2,b2;
    printf("enter the value of a2 and b2:\n");
    scanf("%d %d", &a2, &b2);

    sum(a2,b2);    // function call


    sum(65,66);   // function call with direct values
    return 0;
}