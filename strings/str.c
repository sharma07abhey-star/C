#include <stdio.h>

void toUpperCase(char arr[]);

int main(){
    char str[50];
    printf("enter a string: ");
    fgets(str,sizeof(str),stdin);
    toUpperCase(str);
    printf("Uppercase string: %s", str);
    return 0;
}

void toUpperCase(char arr[]){
    for(int i = 0; arr[i] != '\0'; i++){
        if(arr[i] >= 'a' && arr[i] <= 'z'){
            arr[i] = arr[i] - 32;
        }
    }
}