#include<stdio.h>
#include<math.h>

int main(){
    float radius, height;
    printf("enter the height of the cylinder \n", height);
    scanf("%f", &height);
    printf("enter the radiusof the cylinder \n", radius);
    scanf("%f", &radius);
  printf("the area of the circle %f m^2", (radius*2)*height*3.14);
     return 0;
}