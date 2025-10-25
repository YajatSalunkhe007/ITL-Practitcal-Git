// In a Array of Numbers, find how many times does a number 'x' occurs.


#include <stdio.h>
int main(){
    int n, i, x, count=0;
    printf("Enter the Number of Elements in the Array=");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d Elements=\n", n);
    for (i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf(" Enter the Number to find Occurence of=");
    scanf("%d", &x);
    for(i=0;i<n;i++){
        if (arr[i]==x){
            count++
        }
    }
    printf("Number %d Occurs %d times in the Array", x, count);
    return 0;+
}