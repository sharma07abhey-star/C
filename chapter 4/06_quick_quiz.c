#include <stdio.h>

// write a program using do while loop to print natural numbers based on input

int main(){
    int n ,i = 1;
    scanf("%d",&n);
    do {
        printf("the value of i is %d\n",i);
        i ++;
    } while(i<=n);
    return 0;
}