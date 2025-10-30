// Check if a given character is present in the string or not.


#include <stdio.h>
#include <string.h>
void checkchar(char str[], char ch);
int main (){
    char str[]="6969696969";
    char ch='e';
    checkchar(str, ch);
}
void checkchar (char str[], char ch){
    for (int i=0; str[i] != '\0'; i++){
        if (str[i] == ch){
            printf("Character is Present !!!");
            return;
        }
    }
    printf("Character is Not Present !");
}