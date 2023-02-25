// no argumrnt without return type
/*#include <stdio.h>
void sum(void);
void main()
{
     printf("hey the topic is no argument without return type \n");
    sum();
}
void sum(void)
{
    int x, y, result;
    printf("enter the values\n");
    scanf("%d,%d", &x, &y);
    result = x + y;
    printf("the sum is %d", result);
}*/
// no argument with return type
/*#include <stdio.h>
int sum(void);
void main()
{
    int result;
    result = sum();
    printf("the sum is %d", result);
}
int sum()
{
    int a, b, sum;
    printf("enter the values of a and b \n");
    scanf("%d,%d", &a, &b);
    sum = a + b;
    return sum;
}*/
// with argument with no return type
/*#include <stdio.h>
void fun(int, int,int);
int main() 
{
    int a,b,c;
    printf("enter the values \n");
    scanf("%d , %d ,%d",&a,&b,&c);
    fun(a, b ,c);
    return 0;
}
void fun(int a, int b,int z)
{
    int  sum = 0;
    printf("the numbers are %d %d %d \n", a, b,z);
    sum = a + b + z ;
    printf("the sum is %d", sum);
}*/
// with argument and return type
/*#include <stdio.h>
int fun(int, int);
int main()
{
    int result;
    result=fun(85, 20);
    printf("the sum is %d",result);

    return 0;
}
int fun(int a ,int b)
{
    int sum;
    sum=a+b;
    return sum;
}*/
// same operation with float type
/*#include<stdio.h>
float sum(float,float);
int main(){
    float result ;
    result=sum(52.140000,45.360000);
    printf("the sum is %.3f \n",result);
     return 0;
}
float sum(float a,float b)
{
    float sum;
    printf("the numbers are %f %f \n",a,b);
    sum=a+b;
    return sum;
}*/
