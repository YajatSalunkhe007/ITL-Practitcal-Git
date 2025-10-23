#include <stdio.h>
void square(int n);
void _square(int *n);

int main(){
    int number=4;
    square(number);
    printf("number=%d\n", number);
    _square(&number);
    printf("Number=%d\n", number);
    return 0;
}

//Call by Value

void square(int n){
    n=n*n;
    printf ("Square=%d\n", n);
}

//Call by Reference

void _square(int *n){
    *n=(*n)*(*n);
    printf("Square=%d\n", *n);
}