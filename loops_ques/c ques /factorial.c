#include <stdio.h>

// write the program to print factorial of a given number

int main(){
    int n ;
    int i = 1;
    int fact = 1;
    scanf("%d",&n);
    while(i<=n){
        fact = fact*i;
        i+=1;
    }
    printf("the factorial of %d is %d",n,fact);
    return 0;
}