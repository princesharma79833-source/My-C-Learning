/*5. Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main().*/

/*Dekho yahan pr s and avg are the local variables and inka address access krne ka koi sense nahi bnta
because as soon as our fn completes it work these local variables destroys*/

/*but agr hm phir bhi  unka address access krna chhate hai toh iss tarah se karenge*/

#include <stdio.h>

int *sum(int a, int b);
int *sum(int a, int b)
{
    int s = a + b;
    int *ptr = &s;
    printf("The sum of the two nos. is %d\n", s);
    return ptr;
}

float *average(int a, int b);
float *average(int a, int b)
{
    float avg = (a + b) / 2.0;
    float *ptr = &avg;
    printf("the average of the two nos. is %.2f\n", avg);
    return ptr;
}

int main()
{
    int x = 7;
    int y = 5;
    int *ptr1;
    ptr1 = sum(x, y); // no need to write & as sum fn is returning address

    float *ptr2;
    ptr2 = average(x, y); // no need to write & as average fn is returning address

    sum(x, y);
    average(x, y);

    printf("the address of the variable s is %u and variable avg is %u", ptr1, ptr2);

    return 0;
}