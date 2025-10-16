// Write a function to calculate percentage of a student from marks in Science, Maths and Sanskrit.


#include <stdio.h>
int calcPercentage(int science, int math, int sanskrit);
int main (){
    int science=78;
    int math=90;
    int sanskrit=99;
    printf("Th Percentage is=%d", calcPercentage(science, math, sanskrit));
    return 0;
}
int calcPercentage(int science, int math, int sanskrit){
    return ((science+math+sanskrit)/3);
}