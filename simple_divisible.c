#include <stdio.h>

int main()
{
    int a,b;
    printf("enter the number \n");
    scanf("%d", &a);
    if (a%2==0){
        printf("the number(%d)  you have entered is a even num /n ",a);
    }
    else {
        printf("the number is odd");
        
    }
    
    return 0;
}