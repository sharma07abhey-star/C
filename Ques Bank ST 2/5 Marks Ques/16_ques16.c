// Problem 16: Concatenating Two Strings
// Title: String Concatenation Without Built-in Functions
// Write a program to concatenate two strings without using built-in functions.

#include <stdio.h>

int main(){
    char a[10];
    char b[10];
    char result[20];

    int i = 0;
    int j = 0;

    scanf("%s",a);
    scanf("%s",b);

    while(a[i] != '\0'){
        result[i] = a[i];
        i++;
    }
    while(b[j] != '\0'){
        result[i] = b[j];
        i++;
        j++;
    }
    result[i] = '\0';
    printf("%s",result);
    return 0;
}