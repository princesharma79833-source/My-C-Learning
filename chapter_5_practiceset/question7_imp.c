/*. Write a program using function to print the following pattern (first n lines)
 *
 * * *
 * * * * *
 */

#include <stdio.h>
int structure(int n)
{
    for (int i = 0; i < n; i++)                                // for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= 2 * i + 1; j++)                   //  for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
int main()
{
    int n = 6;
    structure(n);

    return 0;
}