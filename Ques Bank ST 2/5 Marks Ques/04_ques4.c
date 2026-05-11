// Write a C program to find and print all Armstrong numbers within
//  a given range [start,end][start, end][start,end] .
#include <stdio.h>

int countDigits(int n){
    int count = 0;
    while (n != 0){
        count++;
        n /= 10;
    }
    return count;
}

int power(int base, int exp){
    int result = 1;
    for (int i = 0; i < exp; i++)
        result *= base;
    return result;
}

int isArmstrong(int n){
    int temp  = n;
    int count = countDigits(n);
    int sum   = 0;
    while (temp != 0){
        int digit = temp % 10;
        sum += power(digit, count);
        temp /= 10;
    }
    return sum == n;   // returns 1 if armstrong, 0 if not
}

int main(){
    int start, end;
    printf("Enter start : ");
    scanf("%d", &start);

    printf("Enter end   : ");
    scanf("%d", &end);

    printf("\nArmstrong numbers between %d and %d:\n", start, end);
    for (int i = start; i <= end; i++){
        if (isArmstrong(i))
            printf("%d\n", i);
    }
    return 0;
}