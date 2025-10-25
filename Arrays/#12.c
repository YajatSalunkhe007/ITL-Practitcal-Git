// Write a program to print the largest number in the array.


#include <stdio.h>
int main(){
    int n, i, largest;
    printf("Enter the Number of Elements in the Array=");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d Elements=", n);
    for (i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    largest=arr[0];     // Assume that First elements is the largest.
    for(i=0;i<n;i++){
        if (arr[i]>largest){
            largest=arr[i];
        }
    }
    printf("The Largest number in the array is=%d", largest);
    return 0;
}