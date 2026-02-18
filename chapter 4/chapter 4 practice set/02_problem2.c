#include <stdio.h>

// write a program to print multiplication table of 10 in reversed order 

int main(){
    int n = 10 , i = 10;
    while (i>0){
        printf("%d X %d = %d\n",n , i,n*i);
        i -=1;
    }
    return 0;
}