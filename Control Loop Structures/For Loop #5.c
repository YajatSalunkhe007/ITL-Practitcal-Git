//Print the table of the number entered by the user.//


#include <stdio.h>
int main() {
    int n;
    int i;
    printf("Enter a Number, n=");
    scanf("%d", &n);
    for (int i=1; i<=10; i++){
        printf("%d\n",  n*i);
    }
    return 0;
}