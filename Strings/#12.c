// Find the Salted form of a password entered by user if the salt is "123" and added at 
// the end.


#include <stdio.h>
#include <string.h>
void salting(char password[]);
int main (){
    char password[100];
    scanf("%s", password);
    salting(password);
    return 0;
}
void salting(char password[]){
    char salt[]="123";
    char newpass[200];
    strcpy(newpass, password);     // newpass="test"
    strcat(newpass, salt);      // newpass="test"+"123"
    puts(newpass);
}