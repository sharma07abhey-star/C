#include <stdio.h>

// program to print n natural numbers using for loop

int main(){
    int n ;
    scanf("%d",&n);
    for (int i = 1 ; i <= n ;i++){
        printf("the value of i is: %d\n ",i);
    }
    return 0;
}

// in this loop firstly the condition is checked then the block of code is executed 
// and then the value increments 