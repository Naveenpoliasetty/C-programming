#include <stdio.h>

int main()
{
    int rating;
    printf("enter your rating(1-5) \n");
    scanf("%d", &rating);
    switch (rating)
    {

    case 1:
        printf("you rated us with a star thank you so much \n");
        break;
    case 2:
        printf("you rated us with 2 stars thank you so much");
        break;
    case 3:
        printf("you rated us with 3 stars thank you so much ");
        break;
    case 4:
        printf("you rated us with 4 stars thank you so much");
        break;
    case 5:
        printf("you rated us with 5 stars thank you so much");
        break;
      
    default:
        printf("sorry enter valid rating");
    }
    return 0;
}