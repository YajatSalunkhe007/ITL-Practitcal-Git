#include <stdio.h>
int main(){
    char str[100];
    fgets(str, 100, stdin);     // Or gets(str); but this is outdated and not usable.
    puts(str);
    return 0;
}