// write a program to find average of 3 numbers using function 

#include <stdio.h>

float avg(int a,int b,int c){
    return (a+b+c)/3.0;
}
int main(){
    int a1 = 5;
    int b1 = 3;
    int c1 = 11;
    printf("the average of these 3 numbers is %2f",avg(a1,b1,c1));
    return 0;
}