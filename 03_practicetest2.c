#include <stdio.h>

int main()
{
    float tax = 0, income;
    printf("enter your income\n");
    scanf("%f", &income);
    if (income>= 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income - 250000);
    }
    if (income >= 500000 && income <= 1000000)
    {
    tax = tax + 0.2 * (income - 500000);

    }
    if (income >= 1000000)
    {
        tax = tax + 0.3 *(income - 250000);
    }
    printf("the tax you have to pay by the 26th of this month is  %f\n",tax);
    return 0;
}