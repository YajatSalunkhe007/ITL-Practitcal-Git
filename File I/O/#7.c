// Make a Program to read 5 intgers from a file.


#include <stdio.h>
int main (){
    FILE *fptr;
    fptr = fopen("Integers.txt", "r");
    int n;
    fscanf(fptr, "%d", &n);
    printf("Number = %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("Number = %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("Number = %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("Number = %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("Number = %d\n", n);
    fclose(fptr);
    return 0;
}