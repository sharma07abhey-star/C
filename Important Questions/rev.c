#include <stdio.h>

int main(){
    int rev = 0;
    int n ;
    scanf("%d",&n);
    while(n>0){
        int sum = n%10;
        rev = rev*10 + sum;
        n /=10;
    }
    printf("%d",rev);
    return 0;
}