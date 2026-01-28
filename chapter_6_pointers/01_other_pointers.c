#include <stdio.h>

int main()
{

    char a='A';   
    char *j=&a;  // char pointer

    float k=5.51896;
    float *h=&k;    // float pointer

    printf("The address of a is %p\n", &a);
    printf("The address of a is %p\n", j);
    printf("The value of a is %c\n", a);

    printf("The address of k is %p\n", &k);
    printf("The address of k is %p\n", h);
    printf("The value of k is %.4f\n", k);

    return 0;
}