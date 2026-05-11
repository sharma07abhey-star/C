// Problem 8: Finding the Sum of Digits Using Recursion
// Title: Recursive Sum of Digits
// Given an integer N, write a recursive function to find the sum of its digits.
// For example, if N=1234 the sum of digits is 1+2+3+4=10.

#include <stdio.h>

int main(){
    int n;
    int sum  = 0;
    scanf("%d",&n);
    while(n!=0){
        int digit = n%10;
        sum += digit ;
        n/=10;
    }
    printf("%d",sum);
    return 0;
}