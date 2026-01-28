#include <stdio.h>

void swap(int *, int *);
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 1; 
    int y = 8;   // x is 1 and y is 8

    swap(&x, &y);
    printf(" the value of x and y after swapping is %d and %d\n", x, y);

    // now x becomes 8 and y becomes 1

    return 0;
}