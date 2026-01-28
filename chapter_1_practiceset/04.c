#include <stdio.h>

int main()
{
    float radius,height, vol; // to find vol  of cylinder
    printf("ENTER RADIUS OF CYLINDER:\n");
    scanf("%f", &radius);
    printf("ENTER HEIGHT OF CYLINDER:\n");
    scanf("%f", &height);
    vol =(3.14)*radius*radius*height;
    printf("the volume of cylinder is:%f\n", vol);
    
    return 0;
}