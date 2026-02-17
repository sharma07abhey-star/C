#include <stdio.h>

int main(){
    int a = 11;
    int b = 5;
    int c = a+b;
    printf("the value of a is %d and the value of b is %d and sum is %d\n",a,b,c);
    // modulus operator is used to get the remainder
    printf("the remainder when a is divided by b is %d",a%b);

    // this does not work for exponentiation in c
    // int d = a^b ;
    return 0;
}