//Use a library functions to calculate the square of a number given by user.//


#include <stdio.h>
#include <math.h>
int main (){
    int n;
    printf("Enter a Number=");
    scanf("%d", &n);
    printf("The Square is = %d", (int)pow(n, 2));
    return 0;
}