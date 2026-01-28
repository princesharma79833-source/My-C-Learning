/*9. Write a program to check whether a given character is present in a string or not. */

#include <stdio.h>
#include <string.h>

int main()
{
    char string[20];
    printf("enter the string:\n");
    fgets(string, 20, stdin);            // fgets also stores a new line before the null character.....
    puts(string);

    int p = strlen(string);
    printf("the length of the string is: %d\n", p);

    char c;
    printf("enter a character :\n");
    scanf("%c", &c);

    int count;
    for (int i = 0; i < p; i++)
    {

        if (string[i] == c)
        {
            count = 1;
            break;
        }
    }
    if (count == 1)
    {
        printf("yes,the character %c is present in the string\n", c);
    }
    else
    {
        printf("no\n");
    }

    return 0;
}