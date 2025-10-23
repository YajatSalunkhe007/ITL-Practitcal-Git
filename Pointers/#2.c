#include <stdio.h>
int main (){
    int age=22;
    int *ptr=&age;
    printf("%p\n", &age);   // %p; Prints the Address of Age in the form of numbers and alphabets.
    printf("%u\n", &age);   // %u; Prints the Address only in Numbers.
    printf("%u\n", ptr);    // The same Address as &age will be printed because it is a pointer.
    printf("%u\n", &ptr);   // This will print the Address of ptr which is different from "&age" and "ptr".
    return 0;
}