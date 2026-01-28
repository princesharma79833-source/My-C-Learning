#include <stdio.h>

int main()
{
    /*following operations can be performed in the pointers arithmetic
    1. Addition of a number to a pointer.
2. Subtraction of a number from a pointer.
3. Subtraction of one pointer from another.
4. Comparison of two pointer variables.
*/

    /*Quick Quiz: Try these operations on another variable by creating pointers in a separate
    program. Demonstrate all the four operations*/

    // POINTER ARITHMETIC USING THE INTEGER POINTER
    int i = 5;
    int *ptr = &i;
    int **ptr1 = &ptr;

    int j = 6;
    int *l = &j;
    int **m = &l;

    printf("the address of i is %u\n", ptr);
    printf("the address of ptr is %u\n", ptr1);

    printf("the address of j is %u\n", l);
    printf("the address of l is %u\n", m);

    ptr++;
    printf("now the value of ptr is %d\n", ptr);
    ptr = ptr - 2;
    printf("now the value of ptr is %d\n", ptr);

    printf("the value of ptr-l is %d\n", ptr - l); // we cannot add two pointers but we can subtract two pointers
    printf("the value of ptr1-m is %d\n", ptr1 - m);

    if (ptr > l)
    {
        printf("true\n");
    }

    else
    {
        printf("false\n");
    }
    printf("\n");

    // POINTER ARITHMETIC USING THE CHARACTER POINTER
    char e = 'A';
    char *f = &e;

    printf("the address of character a is %d\n", f);
    printf("now the value of b becomes %d\n", f -= 2);
    printf("now the value of b becomes %d\n", f++);

    char g = 'F';
    char *h = &e;

    printf("the address of character c is %d\n", h);

    printf("the value of b-d is %d\n", f - h); // we cannot add two pointers but we can subtract two pointers

    if (f > h)
    {
        printf("true\n");
    }

    else
    {
        printf("false\n");
    }
    printf("\n");

    // POINTER ARITHMETIC USING THE float POINTER
    float p = 5;
    float *q = &p;
    float **r = &q;

    float a = 6;
    float *b = &a;
    float **c = &b;

    printf("the address of p is %u\n", q);
    printf("the address of q is %u\n", r);

    printf("the address of a is %u\n", b);
    printf("the address of b is %u\n", c);

    b++;
    printf("now the value of b is %d\n", b);
    b = b - 2;
    printf("now the value of b is %d\n", b);

    printf("the value of b-q is %d\n", b - q); // we cannot add two pointers but we can subtract two pointers
    printf("the value of r-c is %d\n", r - c);

    if (b > q)
    {
        printf("true\n");
    }

    else
    {
        printf("false\n");
    }
    printf("\n");
    return 0;
}