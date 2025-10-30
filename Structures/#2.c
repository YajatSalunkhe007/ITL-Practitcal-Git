// Write a program to store data of 3 students.


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

    struct student s2;
    s2.roll=46;
    s2.cgpa=7.8;
    strcpy(s2.name, "Saransh");
    printf("Student name : %s\n", s2.name);
    printf("Student Roll No. : %d\n", s2.roll);
    printf("Student CGPA : %f\n", s2.cgpa);

    struct student s3;
    s3.roll=26;
    s3.cgpa=6.8;
    strcpy(s3.name, "Atharva");
    printf("Student name : %s\n", s3.name);
    printf("Student Roll No. : %d\n", s3.roll);
    printf("Student CGPA : %f\n", s3.cgpa);
    return 0;
}