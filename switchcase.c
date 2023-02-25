/*#include <stdio.h>

int main()
{
    int number;
    printf("enter the number \n");
    scanf("%d", &number);
    switch (number)
    {
    case 1:
        printf("january");
        break;
    case 2:
        printf("feburary");
        break;
    case 3:
        printf("march");
        break;
    case 4:
        printf("april");
        break;
    case 5:
        printf("may");
        break;
    case 6:
        printf("june");
        break;
    case 7:
        printf("july");
        break;
    case 8:
        printf("august");
        break;
    case 9:
        printf("september");
        break;
    case 10:
        printf("october");
        break;
    case 11:
        printf("november");
        break;
    case 12:
        printf("december");
        break;
    default:
        printf("invalid input ra puskii");
        break;
    }
    return 0;
}*/
// for multiple case
/*#include <stdio.h>

int main()
{
    int num;
    printf("enter the number \n ");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
    case 2:
    case 3:
    case 4:
        printf("number are less than  5 \n");
        break;
    case 5:
        printf("number are equal to 5 \n");
        break;
     default:
        printf("the number is greater than 5 \n");
        break;
    }
    return 0;
}*/

// SIMPLE CALCULATOR

#include <stdio.h>

int main()
{
    char operators;
    double num1, num2;
    printf("enter the operator \n");
    scanf("%c", &operators);
    printf("enter the number \n");
    scanf("%d", &num1);
    printf("enter the number  \n");
    scanf("%d", &num2);

    switch (operators)
    {
    case '+':
        printf("the sum is %.2lf", num1 + num2);
        break;
    case '-':
        printf("the sum is %.2lf", num1 - num2);
        break;
    case '*':
        printf("the sum is %.2lf", num1 * num2);
        break;
    case '/':
        printf("the sum is %.2lf", num1 / num2);
        break;
    default:
        printf("invalid ");
        break;
    }
    return 0;
}