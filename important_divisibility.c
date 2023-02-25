/*If the year is evenly divisible by 4
 If the year is evenly divisible by 100 
 If the year is evenly divisible by 400
The year is a leap year (it has 366 days).
The year is not a leap year (it has 365 days*/
#include<stdio.h>
int main(){
    int year,divsior=4,remainder;
    printf("enter the year\n");
    scanf("%d",&year);
   (remainder=year%divsior);
   if(remainder==0 )
   printf("the entered year is an leap year\n");
   else 
   printf("the entered year is not an leap year\n");

     return 0;
}