/*program to decrypt a given string(dec the ascii value of characters by 1)*/

#include <stdio.h>

#include <string.h>

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
    decrypt(str);

    printf("%s\n", str);

    return 0;
}