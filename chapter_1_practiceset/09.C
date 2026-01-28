#include <stdio.h>

int main()
{
    int i, n;

    printf("enter a positive integer n:");
    scanf("%d", &n);
    if(n<=0){printf("invalid input");}
    else{printf("%d\n",n);}

    for (i = 1; i<=n; i++)
    {
        if( (i % 3 == 0 )|| (i % 5 == 0))
        {
            printf("%d\n", i);
        }
        
    }

    return 0;
}