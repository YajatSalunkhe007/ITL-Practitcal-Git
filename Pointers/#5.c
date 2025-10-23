// Swap Numbers, a and b.

// We will use Call by Reference because if we use Call by Value, the value will only be
// swapped at the "swap fucntion" and not at the main fucntion.
//So we will use Call by Reference and Pointers to Swap the Values.


#include <stdio.h>
void _swap(int *a, int *b);
int main (){
    int x=3;
    printf("x=%d\n", x);
    int y=5;
    printf("y=%d\n", y);
    printf("After Swapping,\n");
    _swap (&x, &y);
    printf("x=%d\n y=%d", x, y);
    return 0;
}
 void _swap(int *a, int *b){
   int t=*a;    // t is a temporary variable used to exchange values.
    *a=*b;
    *b=t;
}