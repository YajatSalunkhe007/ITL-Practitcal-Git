// Write a program to insert an element at the end of an array.


#include <stdio.h>
int main(){
    int n, i, element;
    printf("Enter the Number of Elements in the Array=");
    scanf("%d", &n);
    int arr[100];
    printf("Enter %d Elements=", n);
    for (i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the Element to Insert at the End=");
    scanf("%d", &element);
    arr[n]=element;
    n++;
    printf("Array after Inserting the Element at the End=\n");
    for (i=0;i<n;i++){
        printf("%d\t", yarr[i]);
    }
    return 0;
}