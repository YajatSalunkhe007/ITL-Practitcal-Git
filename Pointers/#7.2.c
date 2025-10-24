// Using Function and Pointers.



#include <stdio.h>
int findmax(int *a, int *b);
int main (){
    int a, b, max;
     printf("Enter First Number=");
    scanf("%d", &a);
    printf("Enter Second Number=");
    scanf("%d", &b);
    max=findmax(&a, &b);
    printf("Maximum Number is %d", max);
    return 0;
}

int findmax(int *a, int *b){
    if (*a>*b){
        return *a;
    }
    else{
        return *b;
    }
}