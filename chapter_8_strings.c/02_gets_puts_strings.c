#include <stdio.h>

int main() {
    
    char str[50];
    gets(str);   // The entered string is stored in str
    //gets() is a function which can be used to receive a multi-word string.
    //multiple gets() calls will be needed for multiple strings.
    

    // ab gets ki jagah fgets kaa use hota hai...
    // reason is stack overflow, safety issues, memory crash issues
    
    fgets(str , 30 , stdin);  // yeh fgets kaa syntax hota hai
    
    
    
    
    
    
    
    //printf("%s",str);
    puts(str);  // puts can be used to output a string.
    //  Prints the string & places the cursor on the next line 

    printf("hey"); 
    


    return 0;
}