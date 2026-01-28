#include <stdio.h>

int main()
{
    int rollno_marks_class[2][3] = {{1, 10 ,12}, {2, 8,12}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", rollno_marks_class[i][j]);
            
        }
        printf("\n");
    }
    return 0;
}