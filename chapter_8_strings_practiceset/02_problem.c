/*2. Write a program to take string as an input from the user using %c and %s confirm
that the strings are equal.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[7];
    char str2[7];

    printf("enter str1\n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%c", &str1[i]);
        fflush(stdin);  //do not read the new line(enter) character
    }
      str1[6]='\0';
    for (int i = 0; i < 7; i++)
    {
        printf("%c", str1[i]);
    }
    printf("\n");
    
    printf("enter str2\n");
    scanf("%s", str2);
    printf("%s", str2);

    printf("\n");

    printf("%d\n", strcmp(str1, str2));

    return 0;
}