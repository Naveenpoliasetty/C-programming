#include <stdio.h>

int main()
{
    int physics, maths, chemsitry, total;
   
    printf("enter your physics marks\n");
    scanf("%d", &physics);
    printf("enter your maths marks\n");
    scanf("%d", &maths);
    printf("enter your chemsitry marks\n");
    scanf("%d", &chemsitry);
    total =(physics + chemsitry + maths);
   printf("the total is %d\n", total);
    if (physics < 33 || maths < 33 || chemsitry < 33 )
    {
        printf("you failed in exams  \n");
    }
    else 
    {
        printf("you passed in exams\n");
    }
    return 0;
}