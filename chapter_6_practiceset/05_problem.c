/*5. Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main().
*/

#include <stdio.h>

float sum_and_avg(float *, float *);
float sum_and_avg(float *a, float *b)
{

    printf("the sum of the two nos. is: %.2f\n", *a + *b);
    printf("the avg. of the two nos. is: %.2f\n", (*a + *b) / 2);
    return 1.0;
}

int main()
{
    float x = 7, y = 56;
    sum_and_avg(&x, &y);

    return 0;
}