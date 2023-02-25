#include <stdio.h>

int main()
{
    int number;

    printf("enter the number you want to check whether it is even or odd\n");
   scanf("%d",&number);
   if (number%2 == 0)
   {
   printf ("the number you enterd is an even \n");
   }
   else {
       printf("the number you entered is an odd number \n");
   }


    return 0;
}