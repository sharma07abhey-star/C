#include <stdio.h>

// factorial of a number using recursion

int factorial(int n){
    if (n==0 || n ==1){
        return 1;
    }
    else{
        return factorial(n-1) * n;
    }
}

int main(){
    int a = 5;
    printf("the factorial of %d is %d",a,factorial(a));
    return 0;
}


// recursion is a process in which a function calls itself directly or indirectly.
// in this case, the factorial function calls itself with a decremented value of n until 
// it reaches the base case.