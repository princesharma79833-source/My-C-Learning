#include <stdio.h>
#include <string.h>

struct date_of_birth
{
    int day;
    int month;
    int year;
};

struct student
{
    char name[20];
    int roll;
    struct date_of_birth DOB[10];
};


int main()
{
    struct student s[100];
    s[0].roll = 1;
    s[1].roll = 2;
    strcpy(s[0].name, "Paras");
    strcpy(s[1].name, "Prince"); 
    
    

     
    

    return 0;
}