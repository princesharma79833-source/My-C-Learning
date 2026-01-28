/*4. Write a function slice() to slice a string. It should change the original string such
that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position
for slice.*/

#include <stdio.h>
#include <string.h>

char *slice(char *string, int m, int n)
{
    int count = 0;
    while (m != n)
    {
        string[count] = string[m];
        m++;
        count++;
    }
    string[count] = string[n];
    string[count + 1] = '\0';

    printf("%s\n", string);
    return string;
}

int main()
{

    char str[] = "PRINCE_SHARMA";
    int m, n;
    printf("enter the starting(m) and ending(n) position :\n");
    scanf("%d %d", &m, &n);
    printf("\n");
    slice(str, m, n);
    
    printf("\n");

    char str2[] = "prince";
    slice(str2, 3, 4);
    printf("\n");

    char str3[] = "sharma";
    slice(str3, 0, 3);
    printf("\n");
    printf("%s\n",str3);
    

    return 0;
}