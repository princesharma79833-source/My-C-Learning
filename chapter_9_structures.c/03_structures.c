#include <stdio.h>

struct student 
{
    char name[20];
    int roll;
};
int main()
{
    struct student s1 = {"prince", 44};
    struct student s2 = {"Dev", 37};
    struct student s3 = {"Raj", 50};

    struct student *ptr;
    ptr = &s1;
    printf("%p\n",ptr);
    printf("%s\n",(*ptr).name);  // ptr->name
    printf("%d\n",(*ptr).roll);

     

    return 0;
}