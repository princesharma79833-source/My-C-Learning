/*3. Write your own version of strlen function from <string.h>*/
#include <stdio.h>
#include <string.h>

int length_of_string(char *str);
int length_of_string(char *str)
{
    int count = 0;
    while(str[count]!='\0')
    count++;


    return count;
}
int main()
{
    char str[20] = "prince";
    printf("%s\n", str);

    printf("%d\n", length_of_string(str));
    printf("%d\n", strlen(str));
    printf("\n");
    
    printf("%d\n", length_of_string("paris_is_a_beautiful_city"));
    printf("%d\n", strlen("paris_is_a_beautiful_city"));
    printf("\n");
    
    printf("%d\n", length_of_string("raj_and_dev_are_my_good_friend"));
    printf("%d\n", strlen("raj_and_dev_are_my_good_friend"));
    

    return 0;
}