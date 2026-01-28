#include <stdio.h>

int main() {
    int marks[100];   // space to store the marks of 100 students will be generated in the menory
    
    marks[0]=45; // marks of student 1 
    
    marks[1]=95;  // marks of student 2

// the index in arrays starts from 0 ang goes till (n-1)


printf("the marks of student 1 is %d\n", marks[0]);
printf("the marks of student 2 is %d\n", marks[1]);


    return 0;
}