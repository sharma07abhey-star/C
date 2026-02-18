// write a function to calculate force of attraction on a body of mass m exerted by earth 
// consider g = 9.8 m/s

#include <stdio.h>

float force(float mass) {
    return mass * 9.8 ;
}

int main(){
    int m = 45;
    printf("the force on the body is %f",force(m));
    return 0;
}