#include <stdio.h>

// Write a program to check whether a character entered by user is lowercase or not ... 

int main(){
    char c;
    scanf("%c",&c);
    printf("the entered char is %c\n",c);
    printf("the value of entered char is %d\n", c);
    if (c > 96 && c < 123){
        printf("the entered char is lowercase");
    }
    else{
        printf("the entered char is not lowercase");
    }
    return 0;
}

//  ASCII values of characters