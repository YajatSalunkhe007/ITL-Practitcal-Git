// Write a Function to Calculate the Area of a Rectangle.//


#include <stdio.h>
float rectanglearea(float a, float b);

int main(){
    float a;
    float b;
    printf("Enter the Length of the Rectangle, a =");
    scanf("%f", &a);
    printf("Enter the Breadth of the Rectangle, b =");
    scanf("%f", &b);
    printf(" The Area is =%f", rectanglearea(a, b));
    return 0;
}

float rectanglearea(float a, float b){
    return a*b;
}