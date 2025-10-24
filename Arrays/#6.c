// Write a Program for 2 subjects marks of 2 students using 2D arrays.


#include <stdio.h>
int main(){
    int marks[2][3];
    marks[0][0]=90;
    marks[0][1]=89;
    marks[0][2]=78;
    marks[1][0]=87;
    marks[1][1]=56;
    marks[1][2]=95;
    printf("%d", marks[1][2]);
    return 0;
}