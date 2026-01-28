/*Quick Quiz: Create a 2-d array by taking input from the user. Write a display function to
print the content of this 2-d array on the screen.*/

#include <stdio.h>

int print_rollno_class(int* name_of_array) // multi dimensional  array ka jo fn ko pass krne kaa tarika hai woh yahi hai....
{
    {
        int *ptr = name_of_array;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                printf("the (%d,%d) element of this array is %d\n", i,j, *ptr);
                ptr++;
            }
        }
    }
    return 1;
}

int main()
{
    int rollno_class[3][2];
    int i, j;
    printf("enter the roll no. and class of the two students respectively\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("enter the value of rollno_class[%d][%d] ",i,j);
            scanf("%d", &rollno_class[i][j]); // & lagana mt bhoolna.....
        }
    }
    printf("\n");
    print_rollno_class(&rollno_class[0][0]); // hm fn ko call by reference wale method se argument pass kra rahe hain.... yahan pr & lgana mt bhoolna....
    
    printf("\n");
    
    /*for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            printf("the %d row of this array is {%d,%d}\n", i,rollno_class[i][j],rollno_class[i][j+1]);
           
        }
    }*/
  

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d  ",rollno_class[i][j]);
           
        }
        printf("\n");
    }
  
  
  
  
    return 0;
}