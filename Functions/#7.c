//Write Functions to calculate area of square.//


#include <stdio.h>
float squarearea(float a);

int main(){
    float a;
    printf("Enter the Side of the Square =");
    scanf("%f", &a);
    printf(" The Area is =%f", squarearea(a));
    return 0;
}

float squarearea(float side){
    return side*side;
}