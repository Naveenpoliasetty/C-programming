#include<stdio.h>

int main()
    

{
    int age;
    printf("enter your age %d\n", age);
    scanf("%d", &age);
    if (age <= 70 && age >= 18)
    {
        printf("oh yeah you can drive get your fucking licence\n");
    }
    if (age >= 70)
    {
        printf("your are not supposed to drive due to your age as it is greater than 70\n");
    }
    else
    {
        printf("sorry you are not suppose to drive as your age is too small\n");
    }
    return 0;
}