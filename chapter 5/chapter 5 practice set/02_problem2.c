#include <stdio.h>

float c2f(float c){
    return (1.8*c) +32;
}
int main(){
    int cel = 45;
    printf("the temp in farh is %f",c2f(cel));
    return 0;
}