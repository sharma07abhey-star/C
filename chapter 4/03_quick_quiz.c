#include <stdio.h>

//  write a program to print value from 1 to 20 when i is initialized from 0 ...
int main(){
    int i = 0;
    while(i<=20){
        if (i>=10){
            printf("the value of i is %d\n",i);
        }
        i ++;
    }
    return 0;
}