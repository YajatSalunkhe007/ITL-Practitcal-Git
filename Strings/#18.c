// Write a Program to change lowercase letters to uppercase letters
// and vice versa in strings.


#include <stdio.h>
#include <string.h>
int main (){
    char str[100];
    int i;
    printf("Enter a String :");
    fgets(str, 100, stdin);
    for(i=0 ; str != '\0' ; i++){
        if (str[i]>= 'a' && str[i]<= 'z'){
            str[i]=str[i]-32;
        }
        else if (str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }
    }
    printf("Converted String is : %s", str);
    return 0;
}