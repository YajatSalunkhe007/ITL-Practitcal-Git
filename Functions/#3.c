//Write a Fucntion to print "Namaste", when the user in Indian and "Bonjour",
// when the user is French.


#include <stdio.h>
void printnamaste(){
    printf("Namaste!!!");
}

void printbonjour(){
    printf("Bonjour!");
}

int main(){
    char ch;
    printf("Enter'i' for Indian and 'f' if French=");
    scanf("%c", &ch);
    if (ch=='i'){
        printnamaste();
    }
    else{
        printbonjour();
    }
    return 0;
}