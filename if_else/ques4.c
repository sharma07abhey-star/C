#include <stdio.h>
#include <ctype.h>
// the entered char is uppercase or lowercase
int main(){
    char i;
    scanf("%c",&i);
    if(isupper(i)){
        printf("entered char is uppercase");
    }
    else{
        printf("entered char is lowercase");
    }

    return 0;
}