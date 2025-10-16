// Write a Program to convert Celsius to Fahrenheit.



#include <stdio.h>
float convertTemp(float celsius);
int main(){
    float far=convertTemp(0);
    printf("Farhenheit=%f", far);
    return 0;
}
float convertTemp(float celsius){
    float far = celsius*(9.0/5.0)+32;
    return far;
}