#include <stdio.h>

int main()

{
    int percentage;
    int cgpa = 1;
    char sessional_grade = 'a';
    printf("enter your percentage or your cgpa rank with your sessional grade \n", percentage, cgpa, sessional_grade);
    scanf("%d %c\n", &percentage,&cgpa,&sessional_grade);
    if ((percentage >= 90) || (cgpa == 1, sessional_grade == 'a'))
    {
        printf("you have scored well congrats\n");
    }
    if (percentage <= 90 && percentage >= 80)
    {
        printf("you scored good but you can score more than this time");
    }
    if (percentage <= 80 && percentage >= 70)
    {
        printf("expected more than this \n all the best ");
    }
    if (percentage <= 70 && percentage >= 60)
    {
        printf(" try harder next time ");
    }
    if (percentage < 60 && percentage>1)
    {
        printf("come with your parents tommorrow you failed in your exams motherfucker\n");
    }
    return 0;
}