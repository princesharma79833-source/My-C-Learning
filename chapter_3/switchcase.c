#include <stdio.h>

int main()
{
    int x;
    printf("enter x:");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        printf("you entered 1\n");
        

    case 2:
        printf("you entered 2\n");
        
    case 3:
        printf("you entered 3\n");
        
    case 4:
        printf("you entered 4\n");
        
    default:
        printf("nothing matched");
    }
    return 0;
}