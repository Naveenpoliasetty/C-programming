// Program to calculate the sum of numbers (10 numbers max)
// If the user enters a negative number, it's not added to the result

/*#include <stdio.h>
int main() {
   int i;
   double number, sum = 0.0;

   for (i = 1; i <= 10; ++i) {
      printf("Enter a n%d: ", i);
      scanf("%lf", &number);

      if (number < 0.0) {
         continue;
      }

      sum += number; // sum = sum + number;
   }

   printf("Sum = %.2lf", sum);

   return 0;
}*/
#include <stdio.h>

int main()
{
    int i;
    double number, sum = 0.0;
    for (i = 1; i <= 5; ++i)
    {
        printf("enter the number %d \n",i);
        scanf("%lf", &number);
        if (number < 0.0)
        {
            break;
        } 
        sum+=number;
    }
    printf("sum is %.3lf \n",sum);

    return 0;
}