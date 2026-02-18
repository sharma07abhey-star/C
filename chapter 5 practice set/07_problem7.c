#include <stdio.h>

// write a program using functin to print right angle triangle star pattern for "n" lines , like below
// *
// ***
// *****

int main(){
    int n = 4;
    for(int i=0; i<n;i++){
        for(int j=0;j<2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}