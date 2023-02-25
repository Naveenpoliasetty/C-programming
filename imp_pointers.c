#include <stdio.h>

int main()
{
    int a[7] = {10, 11, -1, 56, 67, 5, 4};
    int *p, *q;
    p = a;
    q = &a[0] + 3;
    // printf("%d ", *q);
    printf("%d %d %d \n", (*p)++, (*p)++, *(++p));
    printf("%d \n", *p);
    printf("%d \n", (*p)++);
    printf("%d \n", (*p)++);
    printf("%d \n", *p);
    printf("%d \n", *q);
    q--;
    printf("%d \n", *q);
    printf("%d \n", (*(q + 2))--);
    printf("%d \n", *q);
    printf("%d \n", *(p + 2) - 2);
    printf("%d \n", *(p++ - 2) - 1);
    return 0;
}
