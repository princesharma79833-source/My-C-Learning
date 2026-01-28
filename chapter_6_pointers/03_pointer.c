#include <stdio.h>

int main() {
    int i=5;
    int *k=&i;
    

    printf("address of i is: %p\n", &i);
    printf("address of i is: %p\n", k);
     
    
    printf("address of k is: %p\n", &k);
    



    printf("value of i is %d\n", i);
    printf("value at address k is %d\n", *(&i));
    printf("value at address k is %d\n", *k);
    return 0;
}