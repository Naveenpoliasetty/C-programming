// write a program to multiple the elemnts in an array
#include <stdio.h>
#include<math.h>

int main()
{
    int n = 0;
    printf("enter the value of n \n");
    scanf("%d", &n);
    int a[n], i, multiple = 1, j;
    for (i = 0; i < n; i++)
    {
        printf("enter teh value \n");
        scanf("%d", &a[i]);
        multiple = (multiple * a[i]) % (10^9+7);
    }
    printf("the total is %d",multiple);
    return 0;
}