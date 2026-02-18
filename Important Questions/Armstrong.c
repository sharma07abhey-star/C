#include <stdio.h>

int main(){
    int n;
    int i = 0;
    int arm = 0;
    int og = 0;
    scanf("%d",&n);

    og = n;
    
    while (og!=0){
        int remainder = og%10;
        arm += (remainder * remainder * remainder);
        og/=10;
    }
    if (n == arm){
        printf("the number is armstrong number");
    }
    else{
        printf("the number is not an armstrong number");
    }
    return 0;
}