#include <stdio.h>

int main()
{
    float principal, time, rate, sii;
    printf("enter principal,time,rate:\n");
    scanf("%f%f%f", &principal, &time, &rate);
    sii = (principal * time * rate) / 100;
    printf("sii is %f\n", sii);
    

    return 0;
}