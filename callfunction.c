/*#include<stdio.h>
void fun(int,int);
int main()
{
    int x=5 ,y=7;
    fun(7,5);
    printf("X=%d Y=%d \n",x,y);
}
void fun(int x ,int y)
{
    printf("X=%d Y=%d \n",x,y);
}*/
// so here the definition values are not reflected to main variables

/*#include <stdio.h>
void fun(int*, int*);
int main()
{
    int x = 10, y = 20;
    printf(" X=%d Y=%d at main \n",x,y);
    fun(&x, &y);
    printf("X=%d Y=%d further it is changed to these values \n", x, y);
    return 0;
}
void fun(int *ptr1 ,int *ptr2)
{
    *ptr1=20;
    *ptr2=10;
} */
/* so here the changes in local variables in definition are reflected to main variables thats
it all is about that these pointers deals directly with the addresses and using *(asterisk) before the variables makes the variables
 capable of accessing the values of the main variables thats it */