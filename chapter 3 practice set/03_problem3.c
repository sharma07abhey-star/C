#include <stdio.h>

// The entered year is leap year or not 

int main(){
    int year ;
    scanf("%d" , &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        printf("this is a leap year");
    }
    else{
        printf("this is not a leap year");
    }
    return 0;
}