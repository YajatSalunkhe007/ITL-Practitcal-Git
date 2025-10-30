#include <stdio.h>
#include <string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
struct students1={56, 9.8, "Yajat"};
printf("Roll No.=%d", s1.roll);
struct student *ptr=&s1;
printf("Roll No. =%d", (*ptr).roll);
return 0;
}