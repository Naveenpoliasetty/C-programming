#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;
    printf("enter your first number\n");
    scanf("%d", &num1);
    printf("enter your second number\n");
    scanf("%d", &num2);
    printf("enter your third number\n");
    scanf("%d", &num3);
    printf("enter your fourth number\n");
    scanf("%d", &num4);
    if (num1 > num2 && num1 > num3 && num1 > num4)
    {
        printf("%d is the greatest number from all you have entered", num1);
    }
    else if (num2 > num3 && num2 > num4)
    {
        printf("%d is the greatest number from all you have entered", num2);
    }
    else if (num3 > num4)
    {
        printf("%d is the greatest number from all you have entered", num3);
    }
    else {
        printf("%d is the greatest number from all you have entered",num4);
    }
    return 0;
}  