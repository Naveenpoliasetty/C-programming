// To determine whether a year is a leap year

/*If the year is evenly divisible by 4
A leap year  has 366 days*/
#include <stdio.h>

int main()
{
    int year;
    printf("enter the year to know wheather  it is a leap year\n");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        printf("the year you entered is a leap year");
    }
    else
    {
        printf("the year you entered is not a leap year");
    }
    return 0;
}