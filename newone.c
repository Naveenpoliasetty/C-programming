#include <stdio.h>

int main()
{
    int power_electronics, ac_machines, digital_electronics,total;
    float percentage;
    printf("enter you marks for powerelectronics\n");
    scanf("%d", &power_electronics);
    printf("enter you marks for acmachines\n");
    scanf("%d", &ac_machines);
    printf("enter you marks for digitalelectronics\n");
    scanf("%d", &digital_electronics);
    total = power_electronics + ac_machines + digital_electronics;
    printf("your grand total is %d\n", total);
    percentage = (power_electronics + ac_machines + digital_electronics)/3;
     printf("your percentage is %f\n", percentage);
    if ((total < 81) || power_electronics < 27 || ac_machines < 27 || digital_electronics < 27)
    {
        printf("your failed\n");
    }
    else
    {
        printf("you passed in you exams \n");
    }
    return 0;
}