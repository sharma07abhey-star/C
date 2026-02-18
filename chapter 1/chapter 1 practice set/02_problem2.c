#include <stdio.h>

// calculate area of the circle and volume of cylinder 

int main(){
    float r ;
    scanf("%f",&r);
    int h = 8;
    printf("the area of the circle of radius %.2f is %.2f\n", r , 3.14*r*r);
    printf("the volume of cylinder of height %d and radius %.2f is %.2f", h ,r, 3.14*r*r*h);
    return 0;
}