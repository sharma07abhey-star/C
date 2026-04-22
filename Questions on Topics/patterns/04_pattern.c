// Inverted Right Angled Triangle Right Aligned 
#include <stdio.h>

int main(){
    for(int i = 6;i>=0;i--){
        for(int k = 0;k<6-i;k++){
            printf(" ");
        }
        for(int j = 0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}