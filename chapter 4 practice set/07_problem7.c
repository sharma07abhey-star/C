#include <stdio.h>

//  program to find the given number is prime or not

int main(){
    int n = 5;
    int is_prime = 1;

    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            is_prime = 0;
            break;
        }
    }
    if (is_prime) {
        printf("%d is a prime number\n", n);
    } else {
        printf("%d is not a prime number\n", n);
    }
    return 0;
}