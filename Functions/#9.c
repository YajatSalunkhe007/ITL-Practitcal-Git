//Write a code to Calculate the Area of Circle.//


#include <stdio.h>
float circlearea(float a);

int main(){
    float a;
    printf("Enter the Radius of the circle =");
    scanf("%f", &a);
    printf(" The Area is =%f", circlearea(a));
    return 0;
}

float circlearea(float rad){
    return 3.14*rad*rad;
}