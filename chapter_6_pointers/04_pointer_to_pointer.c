#include <stdio.h>

int main() {
    int i=8;
    int *j=&i;
    int **k= &j;


    //  & se * kt jata hai....

    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);

    printf("The address of j is %p\n", &j);
    printf("The address of j is %d\n", k);



    printf("The value of i is %d\n", i);
    printf("The value stored at address j is %d\n", *j);
    printf("The value stored at address j is %d\n", *(&i));
    printf("The value stored at address j is %d\n", *(*k));
   



    printf("The value stored at address k is %d\n", *k);
    printf("The value stored at address k is %d\n", j);







    return 0;
}