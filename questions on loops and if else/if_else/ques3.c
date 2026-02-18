#include <stdio.h>
// 9. Write a program to input any character and check
//  whether it is alphabet, digit or special character .
int main(){
    char n;
    scanf("%c",&n);
    if(n>='a' && n<='z' || n>='A' && n<='Z'){
        printf("alphabet");
    }
    else if(n>='0'&& n<='9'){
        printf("number");
    }
    else{
        printf("special character");
    }
    return 0;
}