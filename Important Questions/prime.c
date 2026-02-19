// Write a program to check whether a number is a prime number.

#include <stdio.h>

int main(){
    int isprime = 1 , num;
    scanf("%d",&num);
    if(num<2){
        isprime = 0;
    }
    else{
        for(int i=2;i<num/2;i++){
            if(num%i==0){
                isprime =0;
                break;
            }
            else{
                isprime = 1;
            }
        }
    }
    if (isprime){
        printf("prime number");
    }
    else{
        printf("not prime");
    }
    return 0;
}