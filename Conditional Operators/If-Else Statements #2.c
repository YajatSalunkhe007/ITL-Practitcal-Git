// Write a Program to check if a student passed or failed,        marks>30 is Pass; Makrs<=30 is Fail//


#include <stdio.h>
int main(){
    int marks;
    printf("Enter your Marks=");
    scanf("%d", &marks);
    if (marks>=0 && marks<=30){
        printf("FAIL !!!");
    }
    else if(marks>30  &&  marks<=100){
        printf("Passed !!!");
    }
    else{
        printf("Invalid Numbers Entered.");
    }
    return 0;
}