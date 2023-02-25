#include<stdio.h>

int main(){
    int intType;
    float floatType;
    char charType;
    double doubleType;

    printf("size of the int is %zu bytes \n",sizeof (intType));
    printf("size of the float is %zu bytes \n",sizeof (floatType));
    printf("size of the char is %zu bytes \n",sizeof (charType));
    printf("size of the double is %zu bytes \n",sizeof (doubleType));
     return 0;
}