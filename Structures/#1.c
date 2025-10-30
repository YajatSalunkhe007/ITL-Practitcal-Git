#include <stdio.h>
#include <string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main (){
    struct student s1;
    s1.roll=56;
    s1.cgpa=9.8;
    strcpy(s1.name, "Yajat");
    printf("Student name : %s\n", s1.name);
    printf("Student Roll No. : %d\n", s1.roll);
    printf("Student CGPA : %f\n", s1.cgpa);
    return 0;
}