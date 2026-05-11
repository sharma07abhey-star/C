// Write a C program that evaluates a student's performance based on their 
// scores in three subjects: Math, Science, and English.

#include <stdio.h>

int main(){
    int maths , science , english ;
    scanf("%d %d %d",&maths,&science,&english);
    int average = (maths + science + english)/3;
    if(maths > 80 && science > 80 && english > 80){
        printf("excellent ");
    }else if(maths > 90 && (science <=70 || english<=70)){
        printf("focus more on other subjects");
    }else if( average > 75){
        printf("good performance , keep improving ");
    }else{
        printf("you need to work harder !!");
    }
    return 0;
}