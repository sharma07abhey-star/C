// Write a C program to print the count of even digits and odd digits of a number.
#include <stdio.h>

int main(){
    int a;
    int odd = 0;
    int even = 0;
    int digit;
    scanf("%d",&a);
    while(a!=0){
        digit = a%10;
        if(digit % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
        a /=10;
    }
    printf("%d\n%d",even, odd);
    return 0;
}