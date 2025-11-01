// Write a program to allocate memory to store 5 prices.


#include <stdio.h>
#include <stdlib.h>
int main (){
    float *ptr;
    ptr = (float*) malloc(5*sizeof(float));
    ptr[0]=1.0;
    ptr[1]=3.0;
    ptr[2]=5.0;
    ptr[3]=7.0;
    ptr[4]=9.0;
    for (int i=0;i<5;i++){
        printf("%f\n", ptr[i]);
    }
    return 0;
}