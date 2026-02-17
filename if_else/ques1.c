#include <stdio.h>

// 7. Write a program to check whether a character is alphabet or not.

int main(){
    char n;
    scanf("%c",&n);
    if(n>='a' && n<='z' || n>='A' && n<='Z'){
        printf("the character you entered is alphabet");
    }
    else{
        printf("the character you entered is number");
    }
    return 0;
}