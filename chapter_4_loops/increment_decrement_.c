#include <stdio.h>

int main()
{
    int i = 5;
    i = i + 5;

    printf("the value of i is %d\n", i); // 10

    printf("the value of i is %d\n", i++); // 10
    // i++ is a post increment operator ,, means firstly it will print the existing value of i and then will inc the existing value of i by 1 and stores it but does not print it

    printf("the value of i is %d\n", ++i); // 12
    // ++i is a pre increment operator ,, means firstly it will inc the existing value of i by 1 and then will print the new value of i
    
    i +=2;  // i=i+2; += is a compound assignment operator
    printf("the value of i is %d", i); // 14
    return 0;
}