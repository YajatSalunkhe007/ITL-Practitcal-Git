// Write a Program to find the Maximum Number between 2 numbers.

// By using Pointers only.


#include <stdio.h>
int main(){
    int a, b;
    int *ptr1, *ptr2;
    printf("Enter First Number=");
    scanf("%d", &a);
    printf("Enter Second Number=");
    scanf("%d", &b);
    ptr1=&a;
    ptr2=&b;
    if (*ptr1>*ptr2){
        printf("Maximum Number is %d", *ptr1);
    }
    else{
        printf("Maximum Number is %d", *ptr2);
    }
    return 0;
}