/*4. Write a program using recursion to calculate nth element of Fibonacci series.*/

#include <stdio.h>

// 0,1,1,2,3,5,8,13......

int fibonacci_series(int m);
int fibonacci_series(int m)
{
    if (m == 1 || m == 2)
    {
        return m - 1;
    }
    return fibonacci_series(m - 1) + fibonacci_series(m - 2);
}

int main()
{
 int n;
 printf("enter the position of the element in fibonacci series:\n");
 scanf("%d", &n);

    printf("the %dth element in fibonacci series is %d\n", n, fibonacci_series(n));

    return 0;
}