#include <stdio.h>
#include <string.h>

int main()
{

    char st[50] = "PRINCE";
    int c = strlen(st);
    printf("%d\n", c); // printf("%d\n", strlen(st));

    //  function is used to count the number of characters in the string excluding the null(‘\0’) characters.
    // -----------------------------------------------------------------------------------------------------------------------------------------------------------------

    char source[50] = "prince_sharma";
    char target[100];

    strcpy(target, source); // used to copy the content of second string into first string passed to it.
    // target string should have enough capacity to store the source string
    printf("%s  %s", source, target);
    printf("\n");

    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    char s1[20] = "PRINCE";
    char s2[20] = "SHARMA";
    strcat(s1, s2); // used to concatenate two strings.  s1 now contains "PRINCESHARMA" <no space in between>
    printf("%s  %s\n", s1, s2);
    printf("%s\n", s1);
    printf("%s\n", s2);

    strcat(s2, s1);
    printf("%s\n", s2);

    //--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    /*This function is used to compare two strings. It returns 0 if the strings are equal, a
negative value if the first string's mismatching character's ASCII value is less than the
second string's corresponding mismatching character, and a positive value otherwise.
*/

    int d = strcmp("paras", "paras");
    printf("%d\n", d);

    int e = strcmp("DOCTOR", "PATIENT");
    printf("%d\n", e);

    int f = strcmp("table", "chair");
    printf("%d\n", f);

    int g= strcmp("(",")");
    printf("%d\n",g);
    
    //--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    return 0;
}