

// Practice makes us perfect (1)

#include <stdio.h>

int main()
{
    int a[4];
    int i, j;
    printf("the practices chef done \n");
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 4; i++)
    {
        printf(" %d", a[i]);
    }
    for (i = 0; i < 4; i++)
    {
        if (a[i] >= 10)
            j++;
    }
    printf(" \n the weeks chef completed his goal is %d \n", j);

    return 0;
}