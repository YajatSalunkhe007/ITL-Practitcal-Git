#include <stdio.h>
#include <string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main (){
    struct student ece[100];
    ece[0].roll=56;
    ece[0].cgpa=5.6;
    strcpy(ece[0].name, "Yajat Salunkhe");
    printf("Student name is: %s\n", ece[0].name);
    printf("Student Roll No. is: %d\n", ece[0].roll);
    printf("Student CGPA is: %f\n", ece[0].cgpa);
    return 0;
}