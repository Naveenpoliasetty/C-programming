/*#include <stdio.h>
int sum() // function declaration
{
    int a, b, sum; // function definition
    printf("\nenter the number to know the sum ");
    scanf("%d,%d", &a, &b);
    sum = a + b;
    printf("the sum is %d \n", sum);
    return sum;
}
void sub() // function declaration
{
    int c, d, sub; // function definition
    printf("enter the numbers for know the diffrence \n");
    scanf("%d,%d", &c, &d);
    sub = c - d;
    printf("the difference is %d", sub);
}
void multiple()
{
    int e, f, multiply;
    printf(" \n enter the numbers you want to multiply \n");
    scanf("%d,%d", &e, &f);
    multiply = e * f;
    printf("the multiplication is %d", multiply);
}
int main()
{
    printf("hello");
    sum(); // function call
    sub(); // funtion call
    printf("\nhiiii");
    multiple();
    return 0;
}*/

/*#include <stdio.h>
int fun(int a, int b); // function declaration
int main()
{
    int x,y,sum;
    printf("enter any two numbers to add them \n");
    scanf("%d,%d",&x,&y);
    sum=fun(x,y); // function call
    printf("%d, is the sum",sum);
}
int fun(int a, int b)
{
    int result;
    result = a + b;
    return result;
}*/
/*#include <stdio.h>
int sub(void);
int sum(void);
int multiple(void);
float division(void);
int main()
{
    int x, y;
    printf("hello it is all about user defined functions \n");
    sub();
    multiple();
    sum();
    division();
}
int sub(void) // function definitions
{
    int result;
    int x, y, difference;
    printf("\nenter the numbers you want to subtract \n");
    scanf("%d,%d", &x, &y);
    result = x - y;
    printf("\nthe difference is %d", result);
    return result;
}
int sum(void)
{
    int result,x, y;
    printf("\nenter the numbers you want to add \n");
    scanf("%d,%d", &x, &y);
    result = x + y;
    printf("\nthe addition is %d", result);
    return result;
}
int multiple(void)
{
    int result;
    int x, y, multiplicationn;
    printf("\nenter the numbers you want to multiply \n");
    scanf("%d,%d", &x, &y);
    result = x * y;
    printf("\nthe multiplicationn is %d", result);
    return result;
}
float division(void)
{
    float result,remainder;
    int x, y;
    printf("\nenter the numbers you want to divide \n");
    scanf("%d,%d", &x, &y);
    result = x / y;
   // remainder= x % y;
    printf("\nthe quotient is %f", result);
   // printf("\nthe remainder is %f", remainder);
    return result;
}*/
/*#include <stdio.h>
int sum(int a, int b); // function declarations
int sub(int a, int b);
int multiple(int a, int b);
int division(int a, int b);
int main()
{
    printf("hello naveen this is all about user defined functions \n");
    sum(4, 5); // function callings
    sub(10, 4);
    multiple(9, 9);
    division(42, 7);
}
int sum(int a, int b)
{
    int result;
    result = a + b;
    printf("\nthe sum is %d",result);
    return result;
}
int sub(int a, int b)
{
    int result;
    result = a - b;
    printf("\nthe difference is %d",result);
    return result;
}
int multiple(int a, int b)
{
    int result;
    result = a * b;
    printf("\nthe multiplication is %d",result);
    return result;
}
int division(int a, int b)
{
    int result;
    result = a / b;
    printf("\nthe division is %d",result);
    return result;
}*/
/*#include <stdio.h>
double division(void);
int main()
{
    division();
}
double division(void)
{
   double result;
    int x, y;
    printf("enter the value \n");
    scanf("%d , %d", &x, &y);
    result = x / y;
    printf("the result is %f ", result);
    return result;
}*/

// PASSING A ARRAY TO FUNCTION

/*#include <stdio.h>
int marks(int[], int);
int main()
{
    int size = 0;
    float average = 0;
    int class[5] = {10, 25, 54, 36, 52};
    size = +sizeof(class) / sizeof(class[0]);
    average = marks(class, size);
    printf("the size is of array in main is %d bytes \n", sizeof(class));
    printf("the average is %f \n", average);
    return 0;
}
int marks(int fun_array[], int size)
{
    int sum = 0, result = 0, i, elements = 0;
    for (i = 0; i < size; i++)
        sum = sum + fun_array[i];
    result = sum / size;
    printf("the size is of array in function is %d bytes \n", sizeof(fun_array));
    elements = +sizeof(fun_array) / sizeof(fun_array[0]);
    printf("the no of elements are %d \n", elements);
    return result;
}*/

// Passing an array to function

/*#include <stdio.h>
int array_add(int a[]);
int array_multiplication(int[]);
int array_average(int[]);
int main()
{
    int add, average, multiplication;
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {54, 25, 78, 16, 745};
    int c[] = {25, 54, 24, 89, 54};
    add = array_add(a);
    printf("the sum is %d \n", add);
    average = array_average(b);
    printf("the averge is %d \n", average);
    multiplication = array_multiplication(c);
    printf("the multiplication  is %d \n", multiplication);

    return 0;
}
int array_add(int a[])
{
    int return_data = 0, i;

    for (i = 0; i < 5; i++)
    {
        return_data = return_data + a[i];
    }
    return return_data;
}
int array_average(int a[])
{
    int return_data, average = 0, i;

    for (i = 5; i >= 0; i--)
    {
        return_data = return_data + a[i];
    }
    average = average + return_data / 5;
    return average;
}

int array_multiplication(int b[])
{
    int multiply=1, i;
    for (i = 0; i < 5; i++)
    {
        multiply = multiply * b[i];
    }
    return multiply;
}
*/

// PASSING A STRING TO A FUNCTION

/*#include <stdio.h>
#include <string.h>
int string1(char[]);
int string2(char[]);
int main()
{
    int modified, updated = 0;
    char str1[60] = {"naveen poliasetty"};
    char str2[60] = {"vignan"};
    modified = string1(str1);
    printf("the length of first string is %d  \n", modified);
    updated = string2(str2);
    printf("the string elements changed to %s", updated);
    return 0;
}
int string1(char modify[])
{
    int length = 0;
    modify[0] = 'N';
    modify[7] = 'P';
    printf("%s \n", modify);
    length = length + strlen(modify);
    return length;
}
int string2(char modify[])
{
    int uppercase = 0;
    modify[0] = 'V';
    printf("%s \n", modify);
    uppercase = uppercase + strupr(modify);
    return uppercase;
}*/

// PASSING A STRING TO THE FUNCTION

/*#include <stdio.h>
#include <string.h>
int string_length(char[]);
int string_concatenate(char[], char[], char c[]);
int string_compare(char[], char[]);
int string_reverse(char[]);
int main()
{
    int length, concatenate, compare, reverse = 0;
    char string1[60] = {"Naveen Poliasetty "};
    char string2[60] = {"Ajay Poliasetty"};
    char string3[60] = {"and "};
    char string4[60] = {"neevaN"};

    printf("String No 1 is %s \n", string1);
    printf("String No 2 is %s \n", string2);
    length = string_length(string1);
    concatenate = string_concatenate(string1, string2, string3);
    compare = string_compare(string1, string2);
    reverse = string_reverse(string4);
    return 0;
}
int string_length(char a[])
{
    int length = 0;
    length = strlen(a);
    printf("The length is %d \n ", length);
    return 0;
}
int string_concatenate(char a[], char b[], char c[])
{
    strcat(a, c);
    strcat(a, b);
    printf("The string is %s \n", a);
    return 0;
}
int string_compare(char a[], char b[])
{
    if (strcmp(a, b) == 0)
        printf("The string are same \n");
    else
        printf("The strings are not same \n");
    return 0;
}
int string_reverse(char a[])
{
    strrev(a);
    printf("The string %s", a);
    return 0;
}*/

// RETURNING A STRING  FROM FUNCTION

//     CASE 1

/*#include <stdio.h>
char *display();
int main()
{
    char *str;
    str = display();
    printf("the string is %s", str);
    return 0;
}
char *display()
{
    return "naveen";
}*/

// CASE 2

/*#include<stdio.h>
char *string();
int main()
{
    char *str;
    str = string();
    printf("the string is %s",str);
     return 0;
}
char *string()
{
    char *str[]={"naveen"};
    return str;
}*/

// CASE 3

/*#include<stdio.h>
char *string();
int main()
{
    char *str;
    str = string();
    printf("the string is %s \n",str);
    str[0]='N';
    printf("the modified string is %s \n",str);
    return 0;
}
char *string()
{
     static char str[]="naveen";
    return str;
}*/

//      CASE 4

/*#include<stdio.h>
char *string();
int main(){
    char *str;
    str=string();
    printf("the string is %s",str);
    str[0]='N';
     return 0;
}
char *string()
{
    char *str ={"naveen"};
    return str;
}*/

// RETURNING A POINTER FROM FUNCTION

/*#include <stdio.h>
int *returnpointer(int a[]);
int main()
{
    int *p;
    int a[] = {1, 23, 4, 5, 56};
    p = returnpointer(a);
    printf("the pointer pointing to %d \n", *p);
    return 0;
}
int *returnpointer(int b[])
{
    b = b + 2;
    return b;
}*/

//  FUNCTION POINTER

/*#include <stdio.h>
int pointer(int, int);
int main()
{
    int sum = 0;
    int (*ptr)(int, int) = pointer;
    sum = ptr(5, 45);
    printf("the sum is %d", sum);
    return 0;
}
int pointer(int a, int b)
{
    return (a + b);
}*/

// REVISION

/*#include<stdio.h>
float multiplication(int,float);
int main(){
    float result=0;
    float (*ptr)(int,float)=multiplication;
    result=ptr(4.0,8.0);
    printf("the result is %f",result);
     return 0;
}
float multiplication(int a ,float b)
{
    return a*b;
}*/

// CALL BACK FUNCTION

/*#include<stdio.h>
int sum(int a,int b)
{
    printf("THE SUM is %d \n",a+b);
    return 0;
}
int sub(int a, int b)
{
    printf("RHE DIFFERENCE is %d \n",a-b);
    return 0;
}
void disply(int(*fptr)(int ,int))
{
    int a , b;
    scanf("%d ,%d",&a,&b);
    fptr(a,b);

}
int main(){
    disply(sum);
    disply(sub);
     return 0;
}*/

// CALCULATOR USING FUNTION POINTERS

#include <stdio.h>

void sum(int a, int b)
{
    printf(" \n the sum is %d ", a + b);
}
void sub(int a, int b)
{
    printf(" \n the difference is %d ", a - b);
}
void multiple(int a, int b)
{
    printf(" \n the multiplication is %d ", a * b);
}
void divide(int a, int b)
{
    printf(" \n the division is %d ", a / b);
}

int main()
{
    int a, b, c;
   /* printf("enter the '0'to add ; '1' to subtract ; '2' to multiple ; '3' to divide \n ");
    scanf("%d", &a);
    printf("enter the values \n");
    scanf("%d,%d", &b, &c);
    void (*fptr[4])(int, int) = {sum, sub, multiple, divide};
    if (a > 3)
    {
        printf("enter valid addresess \n");
    }
    (fptr[a])(b, c);*/
    char choice ,add;
    printf("enter the your choice \n");
    scanf("%c",choice);
    if (choice == add){
        printf("hii");
    }
    return 0;
}


