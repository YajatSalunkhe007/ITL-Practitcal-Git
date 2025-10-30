// Write a program to convert all the lowercase vowels to uppercase in strings.


#include <stdio.h>
#include <string.h>
int main (){
    char str[100];
    int i;
    printf("Enter a String :");
    fgets(str, 100, stdin);
    for (i=0; str[i] !='\0'; i++){
        switch (str[i]){
            case 'a':str[i]='A';
            break;
            case 'e':str[i]='E';
            break;
            case 'i':str[i]='I';
            break;
            case 'o':str[i]='O';
            break;
            case 'u':str[i]='U';
            break;
        }
    }
    printf("Modifies String : %s", str);
    return 0;
}