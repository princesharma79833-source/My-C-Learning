#include <stdio.h>

int main() {
    char st[]={'a','b','c','\0'};                  
    // string is a character array terminated by a null character(\0)

    // null character marks the ending of the string .
    printf("the first character of this string st  is %c\n", st[0]);
    printf("the last character of this string st  is %c\n", st[3]);


    char string[]={'p','r','i','n','c','e','\0'};
    printf("the first character of the string \"string\"  is %c\n", string[0]);
    printf("the fifth character of the string \"string\"  is %c\n", string[4]);
    printf("the last character of the string \"string\"  is %c\n", string[6]);


    /*Quick Quiz: Create a string using double quotes and print its content using a loop.*/

    char str1[] = "prince";
     //  Another simple way of initialising a string , In this case C adds a null character automatically.
     //  char str1[] ={'p','r','i','n','c','e','\0'};
    
    
    
     for(int i=0;i<7;i++)    // for(int i=0;i<6;i++)  i<6 is also right as null character mein kuch print nahi hota..
    {
        printf("character is %c\n",str1[i]);
        
    }
    printf("\n");
    

    printf("%s",str1);  // another convinient  way of printing a string, prints the entire string 
    // %s is a format specifier used for the strings..


    // TAKING STRING AS A INPUT FROM A USER...
    printf("\n");
    
    char str2[50];

    printf("enter the string:\n");
    scanf("%s",&str2);   // no need to use & while taking string as input 


    // scanf automatically adds a null character when the enter key is pressed.
    //1. The string should be short enough to fit into the array.
    //2. scanf cannot be used to input multi-word strings with spaces.
    printf("\n");
    printf("%s",str2);
    
    return 0;
}