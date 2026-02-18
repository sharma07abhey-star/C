// write a program using recursion to calculate the nth element of the fibonacci series

#include <stdio.h>

int fibonacci(int n){
    if (n ==1 || n == 2){
        return n-1;
    }
    else{
        return fibonacci(n-1) +fibonacci(n-2);
    }
}
int main(){
    int n = 6;
    printf("the value of fibonacci series at %d is %d",n,fibonacci(n));
    return 0;
}