/*8. Write a program to count the occurrence of a given character in a string*/ 
#include <stdio.h>

int main() {

    int count=0;
    char st[]="aabcaam";

    for (int i = 0; i < 8; i++)
    {
        if(st[i]=='a')
        {count++;}
    }
    
    printf("%d",count);
    
    return 0;
}