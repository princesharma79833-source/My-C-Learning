#include <stdio.h>

int main()
{
    int fcp, phy, math;
    printf("enter marks of students in fcp, phy and maths:");
    scanf("%d%d%d", &fcp, &phy, &math);

    /*Write a program to determine whether a student has passed or failed. To pass, a
    student requires a total of 40% and at least 33% in each subject. Assume there
    are three subjects and take the marks as input from the user.*/

    if ((fcp / 24.0) * 100 < 33 || (phy / 24.0) * 100 < 33 || (math / 24.0) * 100 < 33)
    {
        printf("the student is failed because of not able to clear the criteria of getting 33 percent marks in individual subjects");
    }
    else if (((fcp + phy + math) / 72.0) * 100 < 40)
    {
        printf("the student is failed because of not able to clear the overall criteria of getting 40 percent marks");
    }
    else
    {
        printf("the student is clearly passed");
    }

    return 0;
}