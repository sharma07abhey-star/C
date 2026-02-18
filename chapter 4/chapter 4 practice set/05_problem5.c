#include <stdio.h>

// write a program to calculate the sum of num occuring in the mul table of 

int main(){
    int sum = 0;
    for (int i=0;i<=10;i++){
        sum += 8*i;
    }
    printf("%d",sum);
    return 0;
}