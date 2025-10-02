//Write a code for 18% GST.//


#include <stdio.h>
void price(float value);
int main (){
    float value=100.0;
    pricevalue();
    printf("Value is :%f\n", value);
    return 0;
}

void price(float value){
    value=value+(0.18*value);
    printf("Final Price is =%f\n", value);
}