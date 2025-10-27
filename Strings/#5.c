#include <stdio.h>
#include <string.h>
int main (){
    char *canchange="Hello World";
    puts(canchange);
    canchange="Hello";
    puts(canchange);       // If we use String as a pointer we can initialize the string later.

    char cannotchange[]="Hello World";
    puts(cannotchange);
    cannotchange="Hello";   // If we use string as array we cannot reinitialize it.
    return 0;
}