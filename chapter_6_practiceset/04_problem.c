#include <stdio.h>
int by_reference(int *a)
{
   printf("i am a hero");
   return 8;

}
int main() {
    
    int j=8;
    by_reference(&j);



    return 0;
}