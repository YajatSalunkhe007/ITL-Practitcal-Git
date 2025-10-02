//To print table of a input 'n'.//


#include <stdio.h>
void printtable(int n);
int main (){
    int n;
    printf("Enter a Number, n = ");
    scanf("%d", &n);
    printtable(n);
    return 0;
}

void printtable(int n){
    int i;
    for (i=1; i<=10; i++){
        printf("%d\n", i*n);
    }
}