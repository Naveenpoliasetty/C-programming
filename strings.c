// program to find the length using the function
/*#include <stdio.h>
#include <string.h>

int main()
{
    int length;
    char string[60];
    printf("enter the string value \n");
    gets(string);
    length = strlen(string);
    printf("the length is %d", length);

    return 0;
}*/
// program to find the length of the string using logic
/*#include <stdio.h>
#include <string.h>

int main()
{
    int length=0,i=0;
    char string[60];
    printf("enter the string value \n");
    gets(string);
    while(string[i]!='\0')
    {
        length++;
        i++;

    }
    printf("the length is %d excluding null character \n",length);
    printf("the length is %d including  null character \n",length+1);
    puts(string);


    return 0;
}*/
/*#include<stdio.h>
#include<string.h>

int main(){
    char one[30];
    char two [15];
    printf("enter string one \n");
    gets(one);
    printf("enter the string two \n");
    gets(two);
    strcat(one,two);
    puts(one);

     return 0;
}*/
// program to connect two strings in chain using logic
/*#include <stdio.h>
#include <string.h>
int main()
{
    int len1, len2, i;
    char one[30];
    char two[] = {"poliasetty"};
    gets(one);
    len1 = strlen(one);
    len2 = strlen(two);
    printf("the length of string two is %d \n",len2);
    for (i = 0; i <= len2; i++)
    {
        one[len1 + i] = two[i];
    }
    puts(one);
    return 0;
}*/

// program to compare two strings

/*#include <stdio.h>
#include <string.h>
int main()
{
    char s1[30];
    char s2[10];
    printf("enter the string 1 \n");
    gets(s1);
    printf("enter the string 2 \n");
    gets(s2);
    printf("the given strings are:%s %s \n",s1,s2);
   //puts(s1);
  //puts(s2);
    if (strcmp(s1, s2) == 0)
        printf("the strings are same \n");
    else
        printf("the strings are not same \n");
    return 0;
}
*/

// program to compare two strings with logic

/*#include <stdio.h>
#include <string.h>
int main()
{
    int i, value = 0;
    char s1[30];
    char s2[10];
    printf("enter the strings \n");
    gets(s1);
    gets(s2);
    for (i = 0; i < 30; i++)
    {
        value = value + s1[i] - s2[i];
    }
    if (value==0)
    printf("the strings are same \n");
    else
    printf("the strings are not same \n");

    return 0;
}*/

// program to reverse a string

/*#include<stdio.h>
#include<string.h>
int main()
{
    int len1,i;
    char ch;
    char s1[30];
    printf("enter the string \n");
    gets(s1);
    len1 = strlen(s1);
    for (i = 0; i<len1 / 2; i++)
    {
        ch = s1[i];
        s1[i] = s1[len1 - 1 - i];
        s1[len1 - 1 - i] = ch;
    }
    printf("%s",s1);
    return 0;
}
*/
// program to reverse (or) swap to the elements in a string using predefined function

/*#include<stdio.h>
#include<string.h>
int main(){
    char name[30];
    printf("enter the name \n");
    gets(name);
    strrev(name);
    printf("%s",name);
     return 0;
}*/

// program to convert the elements of string from lower case to upper case

/*#include<stdio.h>
#include<string.h>
int main(){
    char name[30];
    gets(name);
    strlwr(name);
    puts(name);
    strupr(name);
    puts(name);

     return 0;
}*/
// program to convert the elements of string from upper case to lower case

/*#include<stdio.h>
#include<strings.h>
int main(){
    char name[30];
    printf("enter the string \n");
    gets(name);
    strupr(name);
    puts(name);
     return 0;
}*/

// program to convert the lower case string to upper case string

// program to find ASCII value
/*#include<stdio.h>

int main(){
    char character;
    scanf("%c",&character);
    printf("%d",character);
 return 0;
}  */
/*#include<stdio.h>
#include<string.h>
int main()
{
    char name[30];
    int i;
    printf("enter the an lower case word \n");
    gets(name);
    for (i=0;name[i]!='\0';i++)
    {
    if (name[i]>=97 && name[i]<=122)
    {
        name[i]=name[i]-32;
    }
    }
    printf("%s",name);
    return 0;
}      */

// program to convert uppper case to lower case

/*#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char s1[30];
    printf("enter the string elements \n");
    gets(s1);
    for (i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] >= 65 && s1[i] <= 90)
        {
            s1[i] = s1[i] + 32;
        }
    }
    printf("%s", s1);
    return 0;
}*/
