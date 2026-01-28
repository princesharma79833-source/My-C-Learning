#include <stdio.h>

int main() {
    int marks[]={9,8,7,3,10};
    int* ptr1=&marks[0];   //int* ptr = &marks[0]  iski jagah int*ptr = marks bhi likh skte hain... 
    
    for (int i = 0; i < 5; i++)
    {
        //printf("the element stored at index %d is %d\n", i,marks[i]); 
        printf("the element stored at index %d is %d\n", i,*(ptr1));  // khoobsurat example of the operator ++ and very khoobsurat example of pointer arithmetic
        ptr1++;
        // in 1st iteration phle read hoga ptr1 and then wo ho jayega ptr1 + 1 means address of next element bn jayega 
        // pehle purana pointer use hoga phir pointer aage badhega
    }


    
    
    
    return 0;
}