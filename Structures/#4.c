#include <stdio.h>
#include <string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main (){
    struct student s1={56, 9.9, "Yajat Salunkhe"};
    struct student s2={54, 1.9, "Saransh Salunkhe"};
    printf("Student name :%s\n", s1.name);
    printf("Student Roll No. :%d\n", s1.roll);
    printf("Student CGPA :%f\n", s1.cgpa);

    printf("Student name :%s\n", s2.name);
    printf("Student Roll No. :%d\n", s2.roll);
    printf("Student CGPA :%f\n", s2.cgpa);
    return 0;
}