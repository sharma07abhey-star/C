#include <stdio.h>

// 8. Write a program to input any alphabet and check whether 
// it is vowel or consonant.

int main(){
    char a;
    scanf("%c",&a);
    if ( a == 'a' || a =='e' || a=='i'|| a =='o'||a =='u'){
        printf("you entered vowel");
    }
    else{
        printf("you entered consonent");
    }
    return 0;
}