//Write a Fucntion to the Sum, Product and Average of 2 numbers. Print the Average in the main Fucntion.


#include <stdio.h>
void dowork(int a, int b, int *sum, int *prod, int *avg);

int main(){
    int a=3;
    printf("a=%d\n", a);
    int b=5;
    printf("b=%d\n", b);
    int sum, prod, avg;
    dowork(a, b, &sum, &prod, &avg);
    printf("Sum=%d\n Product=%d\n Average=%d\n", sum, prod, avg);
    return 0;
}
    void dowork(int a, int b, int *sum, int *prod, int *avg){
        *sum=a+b;
        *prod=a*b;
        *avg=(a+b)/2;
    }

    // We used Pointers and Call by Reference for Sum, Product and Average.
    // And we used Call by Value for int a and b.