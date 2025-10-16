// Sum of First n Natural Numbers.


#include <stdio.h>
int sum(int n);
int main (){
    printf("Sum is=%d", sum(5));;
    return 0;
}

// Recursive Function

int sum (int n){
    if (n == 1){                   // This "if" loop defines the Base Case.
        return 1;
    }
    int sumNm1=sum(n-1);
    int sumN=sumNm1+n;
    return sumN;
}