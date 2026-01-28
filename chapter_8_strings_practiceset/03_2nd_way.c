/*3. Write your own version of strlen function from <string.h>*/
#include <stdio.h>

int length_of_string(char str[]);
int length_of_string(char str[])
{
    int i = 0, count;
    char c=str[i];
    while (c != '\0')
    {
        c = str[i];
        i++;
    }
    count = i - 1;  // if we donot want to include null ch in the length of string
    return count;
}

int main()
{
    char str[20] = "pro";
    printf("%d\n",length_of_string(str) );

    return 0;
}