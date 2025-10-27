#include <stdio.h>
#include <string.h>
int main (){
    char oldstr[]="Old String";
    char newstr[]="New String";
    strcpy(newstr, oldstr);
    puts(newstr);   // Now newstr[]="Old String"
    return 0;
}