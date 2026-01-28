/*7. Try problem 3 using call by value and verify that it does not change the value of
the said variable.*/

#include <stdio.h>

int change_10_times(int a);
int change_10_times(int a)
{
    int temp=10;
    return 10*a;
}

int main() {
    int p=5;
    printf("the ten times to the value of p is: %d\n", change_10_times(p) );
    printf("the actual value of p is :%d\n", p);          // so sad!! call by value is unable to change the original value of p
    return 0;
}