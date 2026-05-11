// Write a C program that evaluates a mathematical expression based on user input.
// The expression is defined as : result = a+b∗c/d−e

#include <stdio.h>

int main(){
    int a,b,c,d,e;
    int default_result ;
    int modified_result ;
    scanf("%d %d %d %d %d", &a , &b , &c ,&d , &e);
    if(d == 0){
        printf("division by 0 is not allowed ");
    }
    default_result = a + b * c / d - e;
    modified_result = ((a+b)-e) * c/d;
    printf("%d\n",default_result);
    printf("%d\n",modified_result);
    return 0;
}