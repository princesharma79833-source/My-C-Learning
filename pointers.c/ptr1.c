#include <stdio.h>

void swap(int*,int*);

int main() {
    int a,b;
    printf("enter the two numbers:\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);                                                           // CALL BY REFERENCE:
    printf("now the values of a and b are %d and %d",a,b);                 // USING POINTERS ANF FUNCTIONS TO SWAP
    return 0;
}

    void swap (int*p, int*q)
    {
        int t;
        t=*p;
        *p=*q;
        *q=t;
    }
          

    /* OTHERWISE WE CAN ALSO DO THIS in the way given below
           #include <stdiO.h>
           int main() {
          int a=5,b=6;
   
            int temp;
            temp=a;
             a=b;
            b=temp;
            printf("the value of a and b after the swapping are %d and %d", a,b);
    return 0;
}  
    */