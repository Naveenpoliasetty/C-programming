#include <stdio.h>

int main()
{
    int date,remaining_days;
    int days=104;
    printf("enter the present count date\n");
    scanf("%d", &date);
    remaining_days = days - date;
    printf("days remaining for your ECET exam is %d \n", remaining_days);

    return 0;
}