#include <stdio.h>

// write a program to sum first 10 natural numbers using while loop 

int main(){
    int i = 0,ans = 0;

    while (i<=10){
        ans = ans + i;
        i ++;
    }
    printf("%d",ans);
    return 0;
}