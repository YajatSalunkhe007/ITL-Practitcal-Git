//Print all the Factorials of a number n.//


#include <stdio.h>
int main (){
    int n;
    printf("Enter a Number=");
    scanf("%d", &n);
    int i;
    int fact=1;
    for (i=1; i<=n; i++){
        fact=fact*i;
    }
    printf("%d", fact);
    return 0;
}