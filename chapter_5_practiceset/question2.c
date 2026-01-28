/*2. Write a function to convert Celsius temperature into Fahrenheit.*/

#include <stdio.h>

float temp_in_fahreneit(float c)
{
   return ( (c*9)/5 + 32); 
}

int main() {
    float temp;
    printf("ENTER THE TEMPERATURE IN CELSIUS:\n");
    scanf("%f", &temp);

    printf("the temp in fahrenheit is %.2f\n",temp_in_fahreneit(temp) );

    
    return 0;
}