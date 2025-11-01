// Write a program to allocate memory of sixe n, where n is givcne by user.


#include <stdio.h>
#include <stdlib.h>
int main (){
    int *ptr;
    int n;
    printf("Enter n=");
    scanf("%d", &n);
    ptr = (int*) calloc(n, sizeof(int));
    for(int i=0;i<n;i++){
        printf("%d", ptr[i]);
    }
    return 0;
}
