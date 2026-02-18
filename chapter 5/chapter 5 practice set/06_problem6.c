#include <stdio.h>

// write a recursive function to calculate the sum of first n natural numbers 

int sum_natural(int n){
    if (n==1){
        return 1;
    }
    return sum_natural(n-1) + n;
}
int main(){
    int n = 6;
    printf("the sum of first six natural numbers is %d",sum_natural(n));
    return 0;
}