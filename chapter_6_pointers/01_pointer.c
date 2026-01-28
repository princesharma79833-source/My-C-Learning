#include <stdio.h>

int main()
{

    int i = 88;
    int *j = &i;
    // j is a pointer (pointer variable) that is pointing to i , or we can say that j is a special variable which is used to store the address of i ( an integer variable) and this special variable is called as pointer .
    // here j is ann integer pointer.
    
    // & is "address of" operator which is used to get the address of a variable.
    
    printf("The address of i is %p\n", &i); // %p is a format specifier used to print address of a variable (pointer)
    printf("The address of i is %p\n", j);

    printf("The address of i is %u\n", &i); // %u is a format specifier used to print unsigned integer value
    printf("The address of i is %u\n", j);

    printf("The address of i is %d\n", j);
    printf("The address of i is %d\n", &i);

    // Note : The address of a variable can be printed using %p format specifier only. Using %u or %d may give warning or may not give correct address value.

    // * is "value at address" operator or dereference operator which is used to get the value stored at a particular address.
    
    printf("the value stored at address j is %d\n", *j);
    printf("the value stored at address j is %d\n", *(&i));

    return 0;
}