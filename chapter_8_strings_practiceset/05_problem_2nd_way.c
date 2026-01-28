#include <stdio.h>

int length_of_string(char str[]);
int length_of_string(char str[])
{
    int i = 0, count;
    char c = str[i];
    while (c != '\0')
    {
        c = str[i];
        i++;
    }
    count = i-1; // if we donot want to include null ch in the length of string
    return count;
}

char *copy_string(char *st2, char *st)
{
    for (int i = 0; i <= length_of_string(st); i++)
    {
        st2[i] = st[i];
    }
     st2[length_of_string(st)]='\0';
    return st2;
}

int main()
{
    char str1[] = "prince";
    char str2[20];

    length_of_string(str1);

    printf("%s\n", copy_string(str2, str1));
    printf("%d", length_of_string(str2));             // gives length of string without including the null character

    return 0;
}