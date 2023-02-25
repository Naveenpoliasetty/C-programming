#include<stdio.h>
int sum(int x)
{
    int s=0;
    if (x==0)
    return x;
    else
    {
    s=x+sum(x-1); // RECURSION CALL 
    return s;
    }
}
int main(){
    int a,n;
    printf("enter the value n \n");
    scanf("%d",&n);
    a=sum(n);
    printf("the value of n numbers of addition is %d",a);
     return 0;
}
