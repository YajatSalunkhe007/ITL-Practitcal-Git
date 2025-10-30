// Write a program ro remove blank spaces in a string.


#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char result[100];
    int i, j = 0;

    printf("Enter a String: ");
    fgets(str, 100, stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            result[j++] = str[i];
        }
    }

    result[j] = '\0';

    printf("String without spaces = %s", result);
    return 0;
}
