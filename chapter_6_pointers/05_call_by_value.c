#include <stdio.h>

int sum(int, int);
int sum(int a, int b)
{
  a=7;
    return a + b;
}

int main()
{
    int x=2, y=9;
    int c = sum(x, y);       // call by value
    printf("the sum of x and y is %d\n", c);        
    printf("the value of x is %d\n", x);   // sum fn cannot change the value of x using a because a copy of x is provided to sum fn in a
   
    return 0;
}