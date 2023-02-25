#include<stdio.h>

int main(){
    int a=10;
    float b=253.145;
    char c='n';
    void *vp;
    vp=&a;
    printf("%d \n",*(int*)vp);
    vp=&b;
    printf("%f \n",*(float*)vp);
    vp=&c;
    printf("%c \n",*(char*)vp);
    // so we printed all three types of data types using void pointer
     return 0;
}


// NULL POINTER
 // PLEASE REFER NOTEBOOK 