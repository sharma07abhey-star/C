// Write a C program to print the day of the week for left most digit of a number.
// A number can have only valid digits from 1 to 7 if the any one of the 
// digit is other than 1 to 7 i.e. 0, 8 or 9 the display a message “Invalid number”.

#include <stdio.h>

int main(){
    int a;
    int digit;
    scanf("%d",&a);
    if(a<0){
        a = -a;
    }
    while(a>=10){
        a = a/10;
    }
    if(a!=0){
        digit = a%10;
        if(digit == 0 || digit == 8 || digit == 9){
            printf("Invalid first digit");
        }
    }
    switch (a)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
    }
    return 0;
}