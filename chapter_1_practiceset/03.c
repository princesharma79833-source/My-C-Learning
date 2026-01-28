#include <stdio.h>

int main()
{
    float radius, area; // to find area of circle
    printf("ENTER RADIUS OF CIRCLE:\n");
    scanf("%f", &radius);
    area =(3.14)*radius*radius;
    printf("the area of this circle is :%f", area);
    return 0;
}