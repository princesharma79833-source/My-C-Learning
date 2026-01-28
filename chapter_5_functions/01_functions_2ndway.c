#include <stdio.h>

 int sum(int, int);             //function prototype

int sum(int x ,int y){                //function definition
    return x+y;
    
}

int main() {

    int a,b;
    printf("enter the value of a and b:\n");
    scanf("%d %d", &a, &b);
    int c = sum(a,b);    // function call
    printf("the sum is %d\n",c);

    
    int a1,b1;
    printf("enter the value of a1 and b1:\n");
    scanf("%d %d", &a1, &b1);
    int c1 = sum(a1,b1);    // function call
    printf("the sum is %d\n",c1);

    int a2,b2;
    printf("enter the value of a2 and b2:\n");
    scanf("%d %d", &a2, &b2);
    int c2=sum(a2,b2);    // function call
    printf("the sum is %d\n",c2);
    return 0;
}