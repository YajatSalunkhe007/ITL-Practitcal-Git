// Create a string firstname and lastname to store details of user and print all the 
// characters using a loop.


#include <stdio.h>
void stringprint(char arr[]);
int main (){
    char firstname[]="Yajat";
    char lastname[]="Salunkhe";
    stringprint(firstname);
    stringprint(lastname);
    return 0;
}
void stringprint(char arr[]){
    for (int i=0;arr[i]!='\0';i++){
        printf("%c", arr[i]);
    }
}