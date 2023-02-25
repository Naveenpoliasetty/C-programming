// to demonstrate the working of KEYWORD  long
#include <stdio.h>

int main()
{
    int a;
    long b;
    long long c;
    short d;
    double e;
    long double f;
    printf("the size of int is %zu bytes \n", sizeof(a));
    printf("the size of long is %zu bytes \n", sizeof(b));
    printf("the size of long long is %zu bytes \n", sizeof(c));
    printf("the size of short is %zu bytes \n", sizeof(d));
    printf("the size of double is %zu bytes \n", sizeof(e));
    printf("the size of long double is %zu bytes \n", sizeof(f));
    return 0;
}