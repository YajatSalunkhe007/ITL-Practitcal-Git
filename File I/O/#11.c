// Write a program to read a string in the file and output in to the user.


#include <stdio.h>
int main (){
    FILE *fptr;
    char str[100];
    fptr = fopen("Input.txt", "r");
    if(fptr == NULL){
        printf("Could not open File");
    }
    fgets(str, 100, fptr);
    printf("The Strings are =%s\n", str);
    fclose(fptr);
    return 0;
}