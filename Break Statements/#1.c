//Keep taking Numbers from the user until they enter an odd numer//


#include <stdio.h>
int main () {
    int n;
    do{
        printf("Enter a Number=");
        scanf("%d", &n);
        if (n%2 !=0){
            break;
        }
    } while (1);
    printf("Thank you !!!");
    return 0;
}