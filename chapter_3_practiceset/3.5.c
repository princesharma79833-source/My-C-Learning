#include <stdio.h>

int main()
{
    float inctax, income;
    printf("enter the income:");
    scanf("%f", &income);

    if (income < 250000)
    {
        printf("inctax is 0");
    }
    else if (income >= 250000 && income < 500000)

    {
        printf("inctax is %f", ((income - 250000) * 5) / 100);
    }

    else if (income >= 500000 && income < 1000000)
    {
        printf("inctax is %f", ((income - 500000) * 20) / 100 + 250000*5/100);
    }
    else if (income >= 1000000)
    {
        printf("inctax is %f", ((income - 1000000) * 30) / 100 + (250000 * 5) / 100 + (500000 * 20) / 100);
    }

    return 0;
}