#include<stdio.h>

int main(){
    char ch;
    /*ASCII value of uppercase alphabets – 65 to 90. 
    ASCII value of lowercase alphabets – 97 to 122.*/
    printf("enter the character\n");
    scanf("%c", &ch);
    if (ch>=97 && ch <=122){
        printf("the entered character is an lowercase character \n");
    }
    else {
        printf("the entered character is not an lowercase character \n");
    }
     return 0;
}