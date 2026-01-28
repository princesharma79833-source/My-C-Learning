#include <stdio.h>

int main() {
    int a=1,b=1,c=0;
    printf("The value of a and b is: %d\n",a&&b);
    printf("The value of a and c is: %d\n",a&&c);

    printf("The value of a or b is: %d\n",a||b);
    printf("The value of a or c is: %d\n",a||c);
    
    printf("The value of not(a) is: %d\n",!a);
    printf("The value of not(b) is: %d\n",!b);           // logical not operator makes true to false and false to true
    printf("The value of not(c) is: %d\n",!c);

    
                                 
    
/*why to use logival operators??  the answer is that As the number of conditions increases, the level of indentation increases. This reduces 
readability. Logical operators come to rescue in such cases. */

// for example:
if(a && b)
{
    printf("both are true\n");
}
//otherwise we have to write it like this:
if(a)
     { if(b) {
        printf("both are true");} }           // nested if statements reduces readability of our programs

 return 0;
} 