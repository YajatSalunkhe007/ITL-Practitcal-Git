//Print Numbers from n to 1000, if n is given by user.//


#include <stdio.h>
int main () {
int n;
printf("Enter a Number, n=");
scanf("%d", &n);
int i=0;
while(i<=n  && n<=1000){
    printf("%d\n", n);
    n++;
}
return 0;
}