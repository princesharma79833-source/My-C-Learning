#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("ENTER TEMP. OF THIS DEVICE IN CELSIUS:");
    scanf("%f",&celsius);
    fahrenheit=(9*celsius)/5 +32 ;
    printf("temp  in fahrenheit is:%f\n", fahrenheit);
    return 0;
}