/*5. Write your own version of strcpy function from <string.h>*/

#include <stdio.h>
#include <string.h>

char* copy_string(char* st2 ,char* st)
{
    for(int i=0; i<=20;i++)
    {st2[i]=st[i];}

    return st2;
}

int main()
{
    char str1[]="prince";
    char str2[20];

    strcpy(str2,str1);
    printf("%s\n",str2);

    printf("\n");
    printf("%s",copy_string(str2 ,str1));
    

    
    
    return 0;
}