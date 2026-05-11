// Write a C program that defines a function to check if a number is prime or not. 
// The program should: Take an integer input from the user. checkPrime() function is called 
// from main() function and it will print “Prime” if the number is prime,
// otherwise print “Not prime”.

#include <stdio.h>

void checkprime(int num);
int main(){
    int a ;
    scanf("%d",&a);
    checkprime(a);
    return 0;
}
void checkprime(int num){
    int flag = 1;
    for(int i = 2;i<=num/2;i++){
        if(num%i == 0){
            flag = 0;
            break;
        }
    }
    if(flag){
        printf("prime");
    }
    else{
        printf("not prime");
    }
}