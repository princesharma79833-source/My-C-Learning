/*6. Write a program to encrypt a string by adding 1 to the ascii value of its
characters.*/

#include <stdio.h>
#include <string.h>

char *encrypt(char *st)
{

    for (int i = 0; i < strlen(st); i++)
    {
        st[i] = st[i] + 1;
    }
    printf("%s\n", st);

    return st;
}

int main()
{
    char str[] = "PRINCE";
    encrypt(str);
    printf("\n");

    printf("%s\n", str);

    return 0;
}