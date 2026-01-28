/*3. Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth. Consider g = 9.8m/s2*/
#include <stdio.h>

float force_of_attraction(float m)
{ return m*9.8;}

int main() {

    float mass;
    printf("enter the mass ");
    scanf("%f", &mass);

    printf("the force of attraction on the body is %.2f\n", force_of_attraction(mass) );
    
    return 0;
}