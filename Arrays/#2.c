// Input and Output syntaxes for Arrays.


#include  <stdio.h>
int main (){
    int marks[3];
    printf("Enter Physics Marks=");
    scanf("%d", &marks[0]);
    printf("Enter Chemistry Marks=");
    scanf("%d", &marks[1]);
    printf("Enter Maths Marks=");
    scanf("%d", &marks[2]);
    printf(" The Over all Marks are=\n Physics=%d\tChemistry=%d\tMaths=%d\t", marks[0], marks[1], marks[2]);
    return 0;
}