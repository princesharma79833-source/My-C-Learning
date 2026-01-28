#include <stdio.h>

int main()
{
    int fcp, phy, math;
    printf("enter the marks of students in fcp, phys and math:");
    scanf("%d%d%d", &fcp, &phy, &math); 
    
    /*Write a program to determine whether a student has passed or failed. To pass, a
    student requires a total of 40% and at least 33% in each subject. Assume there
    are three subjects and take the marks as input from the user.*/
    

    if (((fcp + phy + math) / 72.00) * 100 >= 40 && (fcp / 24.0) * 100 >= 33 && (phy / 24.0) * 100 >= 33 && (math / 24.0) * 100 >= 33)
    {
        printf("the student is passed in overall");
    }
    else
    {
        printf("the student is failed in overall");
    }
    return 0;
}