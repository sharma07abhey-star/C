// Find the Smallest Divisor (Other than 1)
#include <stdio.h>

int smallestdiv(int n){
    for(int i = 2;i<=n;i++){
        if(n%i == 0){
            return i ;
        }
    }
    return n ;
}
int main(){
    int n;
    scanf("%d",&n);
    if(n == 1){
        printf("Prime Number");
    }else{
        int divisor = smallestdiv(n);
        if(divisor == n){
            printf("Prime Number");
        }else{
            printf("%d\n",divisor);
        }
    }

    return 0;
}