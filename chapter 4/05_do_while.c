#include <stdio.h>

int main(){
    int i = 0;
    do {
        printf("the value of i is %d\n",i);
        i ++;
    } while(i<5);
    
    return 0;
}

// the do while loop executes at least once even if the condition in while loop is false ...
// it executes the statement once and then check the condition , if condition is false 
// the loop terminates and if condition is true the loop will execute . 