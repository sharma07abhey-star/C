#define SIZE 5
#include <stdio.h>

int main(){
    int marks[SIZE];
    printf("enter marks of 5 students\n");

    // scanf("%d",&marks[0]);
    // scanf("%d",&marks[1]);
    // scanf("%d",&marks[2]);
    // scanf("%d",&marks[3]);
    // scanf("%d",&marks[4]);

    for(int i=0;i<5;i++){
        scanf("%d",&marks[i]);
        printf("the value of marks at index %d is %d\n", i, marks[i]);
    }
    return 0;
}