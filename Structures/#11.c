// Make a Structure to store nack account information of a customer of ABC Bank. Also make an
// Alias for it.


#include <stdio.h>
#include <string.h>
typedef struct BankAccount{
int accountno;
char name[100];
} acc;
int main (){
    acc acc1={123, "Yajat"};
    acc acc2={456, "Atharva"};
    acc acc3={789, "Rohan"};
    printf("Account Number= %d\n", acc1.accountno);
    printf("Name= %s\n", acc1.name);
    printf("Account Number= %d\n", acc2.accountno);
    printf("Name= %s\n", acc2.name);
    printf("Account Number= %d\n", acc2.accountno);
    printf("Name= %s\n", acc2.name);
    return 0;
}
