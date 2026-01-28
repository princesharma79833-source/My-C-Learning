/*Write a recursive function to calculate the sum of first ‘n’ natural numbers.*/

#include <stdio.h>

int sum(int n)
{

    if (n == 1)
    {
        return 1;
    }
    return n + sum(n - 1);
}
int main()
{
    int l ;
    printf("enter a positive integer n to calculate sum of first n natural numbers:\n");
    scanf("%d", &l);
    printf("the sum of first %d natural numbers is %d\n", l, sum(l));

    return 0;
}