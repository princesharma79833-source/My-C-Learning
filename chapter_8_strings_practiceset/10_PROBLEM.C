/*7. Write a program to decrypt the string encrypted using encrypt function in problem 6.*/

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

char *decrypt(char *st)
{

    for (int i = 0; i < strlen(st); i++)
    {
        st[i] = st[i] - 1;
    }
    printf("%s\n", st);

    return st;
}

int main()
{
    char str[] = "maksad nahi bhoolna";
    encrypt(str);
    printf("\n");

    printf("%s\n", str);
    printf("\n");

    decrypt(str);
    return 0;
}