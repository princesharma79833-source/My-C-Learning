#include <stdio.h>

int sum (int*,int*);   // yahan pr sum fn ke andar pointers(yaani ki addresses)pass kiye jaa rhe hain
int sum (int* a, int* b) // smjho a ek pointer bariable hai ( a=&m let say) then *a= *(&m)=m ,, yaani ki we are actually passing the address of variable(a)  and though *a we  access the value stored at that address

{                         
    *a=5;
    return *a + *b;
}

int main() {

    int x=1,y=6;
int c = sum(&x, &y);             // call by reference
printf("Sum: %d\n", c);

printf("the value of x is: %d\n",x);    // call by value se hm x ki value change nhi kr paa rhe the because usme toh bs  x ki ek copy pass hoti hai 
                                      // but yahan pr hm call by reference se x ka address bhejte hai and fn changes the value stored at that address and ultimately hmara x change ho jaata hai

    
    
    return 0;
}
