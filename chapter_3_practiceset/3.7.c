#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c", &ch);
    printf("The ASCII value of the  character is :%d", ch);

    /*CONCEPT OF ASCII VALUE :  Computer sirf numbers samajhta hai, letters nahi.
Isliye har character (jaise A, B, 1, @, space, etc.) ko ek unique number diya gaya hai.
Us number ko ASCII value kehte hain.*/

    /* https://www.ascii-code.com/   */

    /*Write a program to determine whether a character entered by the user is
lowercase or not.*/

    if (ch >= 97 && ch <= 122)
    {
        printf("\nthe character is in the lower case");
    }
    else
    {
        printf("\nthe character is not in the lower case");
    }
    return 0;
}