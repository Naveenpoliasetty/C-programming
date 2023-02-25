// 4 bytes =32 bits
//different data types*/
/*
int         (4 bytes)| %d for printing 
double      (8 bytes)| %lf for printing
float       (4 bytes)| %f for printing
char        (1 bytes)| %c for printing 
these %f and all are called as format specifiers*/
/*#include<stdio.h>


// INT DATA TYPE


int main(){
    int age = 10 ;

    printf ( " Age=%d\n", age);
     return 0;
}
 the float and double are used to store
 decimal or expotential values the only diffrence
 is the size 
 the double can store more accurate values 
 with large number of decimals as compared to float 
*/
/*#include<stdio.h>


// DOUBLE DATA TYPE


int main(){
    double decimalnumber= 12.89;
    printf("the decimal is %lf /n", decimalnumber);
     return 0;
}  
/* if you print the given number then a numebr with 6 decimal 
will get print by automatic. To avoid those zeroes 
what we do is 
we simply write decimal(.)and the the numbers we want afetr the decimal like (.2) in between the % and lf*/
/*#include<stdio.h>

int main(){
    double decimal= 56.489568;
    printf (" the decimal is %.3lf /n", decimal);
    // here we wrote .3 because we need three number after the decimal 
     return 0;
}*/
 
// DOUBLE CAN ALSO STORE EXPOTENTS 

/*#include<stdio.h>

int main(){
double num=10.5e6;
// we know 'e' meant for 10 to the power of 
printf(" the expontential form is %.0lf \n", num);
     return 0;
}*/

 

 /* SO coming to the float */

 // FLOAT DATA TYPE


/*#include<stdio.h>

 int main(){
    float number = 10.9f;
    // we needd to mention'f' after the number of the float 
    // here the f is not a text it a syntax that's it 
printf (" the float is %f\n", number);
 /* sometimes the decimal that we printed cant be accurate like if
  we want to print 56.54 it will print like 56.539999 to make use those additional 
  digit places so it is recommended to use double instead of float 
    return 0;
    // as we used in double we use (.x) in between the % and f so get a certain digits after the 'f'
    // float tries to give approximate value for maximum
}*/
/*#include<stdio.h>
int main(){
    float number = 10.9f;
   
printf (" the float is %.1f\n", number);
return 0;
}*/

//  CHAR DATA TYPE

// char data type is used to store character like z,f,&,;,d,and etc
/*#include<stdio.h>

int main(){
    char character='x';
    // the character must be entered in single quote
    printf("the character is %c \n ", character);
    printf("the ASCII value is %d \n ", character);

     return 0;
}*/
/* the char stores a character in integer type rather than a char type 
so we can get ASCII values of characters using char all we need to do is to 
change the format specifier from %c to %d so that we can have that integer value */