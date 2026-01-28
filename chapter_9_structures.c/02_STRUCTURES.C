
#include <stdio.h>
#include <string.h>

struct employee
    {
       char name[20];
       int code;
       float salary;
    };

int main() {
    struct employee e1;
    {
       strcpy(e1.name,"PRINCE");
       e1.code=4511;
       e1.salary=200000.00;
    };

    struct employee e2;
    {
        strcpy(e2.name,"RAJ");
       e2.code=4512;
       e2.salary=200000.00;
    };

    struct employee e3;
    {
        strcpy(e3.name,"DEV");
       e3.code=4513;
       e3.salary=200000.00;
    };
    
    return 0;
}