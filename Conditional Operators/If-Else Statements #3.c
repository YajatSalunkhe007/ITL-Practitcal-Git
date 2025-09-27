//Write a program to check if the character written is upper case or lower case.//


#include <stdio.h>
int main() {
    char ch;
    printf("Enter Character=");
    scanf("%c", &ch);
    if (ch>='A'  &&  ch<='Z'){
        printf("Upper Case");
    }
    else{
        printf("Lower Case");
    }
    return 0;
}