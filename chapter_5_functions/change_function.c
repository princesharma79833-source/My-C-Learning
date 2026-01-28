#include <stdio.h>

int change(int a);
int change(int a) {
    a=77;
    return 0;
}

int main() {       //here change function is not receving the actual value of b , it receives the copy of b
    int b=22;      // so the value of b remains unchanged
    change(b);
    printf("the value of b is %d\n", b);
    return 0;
}