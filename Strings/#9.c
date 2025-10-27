#include <stdio.h>
#include <string.h>
int main (){
    char firststr[100]="Hello";
    char secondstr[]="World !!!";
    strcat(firststr, secondstr);
    puts(firststr);
    return 0;
}