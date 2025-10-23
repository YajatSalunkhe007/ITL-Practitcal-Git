// Write a Program to print all the letters in the English Alphabets using Pointers.


#include <stdio.h>
int main(){
    char ch;
    char*ptr;
    printf("Uppercase Letters=\n");
    ch='A';
    ptr=&ch;
    while (*ptr<='Z'){
        printf("%c", *ptr);
        (*ptr)++;
    }
    printf("\nLowercase Letters=\n");
    ch='a';
    ptr=&ch;
    while (*ptr<='z'){
        printf("%c", *ptr);
        (*ptr)++;
    }
    return 0;
}