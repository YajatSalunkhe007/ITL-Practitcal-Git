#include <stdio.h>
#include <string.h>
typedef struct ComputerEngineeringStudent{
    int roll;
    float cgpa;
    char name[100];
} coe;
int main(){
    coe s1;
    strcpy(s1.name, "Yajat Salunkhe");
    s1.roll=56;
    s1.cgpa=9.6;
    printf("Student name :%s\n", s1.name);
    printf("Student Roll No. :%d\n", s1.roll);
    printf("Student CGPA :%f\n", s1.cgpa);
    return 0;
}