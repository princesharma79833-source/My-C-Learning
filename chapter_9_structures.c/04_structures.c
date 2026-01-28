 #include <stdio.h>
#include <string.h>


 struct student 
{
    char name[20];
    int roll;
};
 
 int main() {

    struct student s[100];
    s[0].roll=1;
    s[1].roll=2;
    strcpy(s[0].name,"Paras");
    strcpy(s[1].name,"Prince");


    printf("%d\n", s[0].roll);
    printf("%d\n", s[1].roll);
    printf("%s\n", s[0].name);
    printf("%s\n", s[1].name);
    

    
    return 0;
 }