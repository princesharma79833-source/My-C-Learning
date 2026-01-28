#include <stdio.h>

int main()
{

/*
Quick Quiz: Write a program to find grade of a student given his marks based on below:
90 – 100 => A
80 – 90 => B
70 – 80 => C
60 – 70 => D
50 – 60 => E
<50=> F 
*/
    int marks;
    printf("enter the marks of the student:");
    scanf("%d", &marks);

    if (marks > 90 && marks <= 100)
    {
        printf("grade is A");
    }

    else if (marks > 80 && marks <= 90)
    {
        printf("grade is B");
    }

    else if (marks > 70 && marks <= 80)
    {
        printf("grade is C");
    }

    else if (marks > 60 && marks <= 70)
    {
        printf("grade is D");
    }

    else if (marks > 50 && marks <= 60)
    {
        printf("grade is E");
    }

    else
    {
        printf("grade is F");
    }
    return 0;
}