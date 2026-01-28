#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("enter the values of a, b, c and d:");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b && a > c && a > d)
    {
        printf("a is the greatest of a ,b,c and d");
    }
    else if (b > a && b > c && b > b)
    {
        printf("b is the greatest of a ,b,c and d");
    }
    else if (c > a && c > b && c > d)
    {
        printf("c is the greatest of a ,b,c and d");
    }
    return 0;
}