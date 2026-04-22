// Write a program to input week number and print week day.
#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("monday");
        break;
    case 2:
        printf("tuesday");
        break;
    case 3:
        printf("wednesday");
        break;
    case 4:
        printf("thursday");
        break;
    case 5:
        printf("friday");
        break;
    case 6:
        printf("saturday");
        break;
    case 7 :
        printf("sunday");
        break;
    default:
        break;
    }
    return 0;
}