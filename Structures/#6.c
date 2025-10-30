#include <stdio.h>
#include <string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
void printinfo(struct student s1);
int main(){
struct student s1={56, 9.2, "Yajat Salunkhe"};
printinfo(s1);
return 0;
}
void printinfo(struct student s1){
    printf("Student Information=\n");
    printf("Student name :%s\n", s1.name);
    printf("Student Roll No. :%d\n", s1.roll);
    printf("Student CGPA :%f\n", s1.cgpa);
}