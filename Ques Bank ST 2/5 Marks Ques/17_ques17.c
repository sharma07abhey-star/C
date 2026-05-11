// Problem 17: Counting Vowels and Consonants
// Title: Vowel and Consonant Counter
// Write a program to count the number of vowels and consonants in a given string.
// Assume the string only contains alphabetic characters.

#include <stdio.h>

int main(){
    char str[100];
    int vowels =  0;
    int conson = 0;
    scanf("%s",str);
    for(int i = 0;str[i]!='\0';i++){
        char ch = str[i];
        if (ch == 'A' || ch== 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch== 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                vowels++;
            }
        else{
            conson++;
        }
    }
    printf("Vowels = %d\n",vowels);
    printf("Consonants = %d",conson);
    return 0;
}