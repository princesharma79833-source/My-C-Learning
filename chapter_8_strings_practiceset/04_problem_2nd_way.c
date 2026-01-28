#include <stdio.h>

char *slice(char *string, int m, int n);
char *slice(char *string, int m, int n)
{
    char *ptr1 = &string[m];
    string[n+1]='\0';
    string = ptr1;

    return string;
}

int main()
{

    char st[] = "Prince_Sharma";
    printf("%s\n", slice(st, 1, 9));
    printf("%s\n",st);
    

    return 0;
}
