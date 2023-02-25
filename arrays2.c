/*#include<stdio.h>

int main(){
    int a[5],i;
    for (i=0;i<5;i++)
    scanf("%d",&a[i]);
    for (i=4;i>=0;i--)
    printf("\n the value in index %d is %d ",i,a[i]);
    for (i=0;i<5;i++)
    printf("\n the value in index %d is : %d",i,a[i]);
    return 0;
}*/
/*#include <stdio.h>

int main()
{
    int marks[5], i, sum = 0;
    float average;
    for (i = 0; i < 5; i++)
        scanf("%d", &marks[i]);
    for (i = 0; i <= 4; i++)
    {
        printf("the value in index marks[%d] is %d \n ", i, marks[i]);
        sum = sum + marks[i];
    }
    average=sum/5;
    printf("the avreage is %f",average);// ekkada manaki exact value chupinchatledhun float loo
    printf("the sum is %d", sum);
    return 0;
}*/
// pick the even and odd numbers
/*#include <stdio.h>

int main()
{
    int a[5], even=0, odd=0, i;
    printf("enter the numbers \n ");
    for (i = 0; i < 5; i++)
    //printf("enter the number \n ");
        scanf("%d", &a[i]);
    for (i = 0; i < 5; i++)
    {
        if(a[i] % 2 == 0)
        {
            printf("the number in index a[%d] is an even number \n ",i);
            even=even+1;
        }
        else
        {
            printf("the number in index a[%d] is an odd number \n",i);
            odd=odd+1;
        }
    }
    printf("the total number of even elements are %d\n ",even);
        printf("the total number of odd elements are %d \n",odd);
    return 0;
} */
// add to arrays and store them in 3rd array
/*#include <stdio.h>

int main()
{
    int a[5], b[5], c[5], i;
    printf("enter the numbers for first array \n");
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    printf("enter the numbers for second array \n");
    for (i = 0; i < 5; i++)
        scanf("%d", &b[i]);
    for (i = 0; i < 5; i++)
    {
        c[i] = a[i] + b[i];
        printf("the value in c[%d] is %d \n", i, c[i]);
    }
    return 0;
}*/
/*#include <stdio.h>

int main()
{
    int a[3][3], i, j,sum=0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enter the nummber \n");
            scanf("%d", &a[i][j]);
        }
    }
    for (i=0;i<3;i++)
    {
    for (j=0;j<3;j++)
    {
        printf("%d \t",a[i][j]);
        sum=sum+a[i][j];
    }
    printf("\n");
    }
    printf("the sum is %d",sum);
    return 0;
}*/
/*#include<stdio.h>

int main(){
    int a[2][3],i,j;
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("the value of element \n");
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("%d \t",a[j][i]);
        }
        printf("\n");

    }
     return 0;
}*/
/*#include <stdio.h>

int main()
{
    int a[3][3], i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enter the value :");
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        int  sum_R = 0, sum_C = 0;
        for (j = 0; j < 3; j++)
        {
            sum_R = sum_R + a[i][j];
            sum_C = sum_C + a[j][i];
        }
       printf("the sum of rows elements are %d \n",sum_R);
       printf("the sum of column elements are %d \n",sum_C);
    }
        int  sum_D = 0;
        for (j = 0; j < 3; j++)
        {
            sum_D = sum_D + a[j][j];
        }
       printf("the sum of diagonal elements are %d \n",sum_D);

    return 0;
}*/
/*#include<stdio.h>

int main(){
    int a[3][3],b[3][3],c[3][3],i,j;
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("enter elements for  matrix \n");
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("enter elements for 2nd matrix \n");
            scanf("%d",&b[i][j]);
        }
    }
    printf("the first matrix is \n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }
    printf("the second ,atrix is \n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d \t",b[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
     printf("the final matrix is \n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {

            printf("%d \t",c[i][j]);
        }
        printf("\n");
    }



     return 0;
}*/
/*#include <stdio.h>
#define N 50
int main()
{
    int a[N][N], b[N][N], c[N][N], i, j, k, m, n, p, q, sum = 0;
    printf("enter the rows and columns \n");
    scanf("%d ,%d", &m, &n);
    printf("enter the first matrix");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the rows and columns \n");
    scanf("%d ,%d", &p, &q);
    printf("enter the second matrix \n");
    for (i = 0;  i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("the first matrix is \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }
    printf("the second matrix is \n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d \t", b[i][j]);
        }
        printf("\n");
    }
    if (n != p)
    {
        printf("multiplcation cannot be done \n");
    }
    else
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                sum = 0;
                for (k = 0; k < m; k++)
                {
                    sum = sum + (a[i][k] * b[k][j]);
                }
                c[i][j] =sum;
            }
        }
        printf("THE FINAL MATRIX IS \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("%d \t", c[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}*/
