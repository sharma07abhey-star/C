#include <stdio.h>

// write a program to find grade of student based on marks 
int main(){
    int a;
    scanf("%d",&a);
    if (a>90 && a<100){
        printf("grade = A");
    }
    else if (a>80 && a<90){
        printf("grade = B");
    }
    else if (a>70 && a<80){
        printf("grade = C");
    }   
    else if (a>60 && a<70){
        printf("grade = D");
    }
    else if (a>50 && a<60){
        printf("grade = E");
    }
    else if (a<50){
        printf("grade = F");
    }
    else {
        printf("invalid marks");
    }
    return 0;
}