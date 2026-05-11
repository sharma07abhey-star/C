// Write a C program that reads an integer input and determines if the number 
// is positive, negative, or zero. The program should then display the result.
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n>0){
        printf("positive");
    }else if(n<0){
        printf("negative");
    }else{
        printf("zero");
    }
    return 0;
}