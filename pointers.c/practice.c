#include <stdio.h>

int main() {
    int n=8;
     int m=9;
     int j;

    printf("%d\n",&n);
    printf("%d",&m);

    printf("\n%d",*&n);
    printf("\n%d",*&m);
    j=&n;
     printf("\n%d",j);
      printf("\n%d",&j);
    return 0;
}