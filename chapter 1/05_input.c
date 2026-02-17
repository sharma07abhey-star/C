#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a); // %d is must written if input value is integer 
    printf("the value of a is %d\n",a);
    float b;
    scanf("%f",&b);
    printf("the value of b is %f\n",b);
    return 0;
}
// if the input value taken is float or char then %f and %c are used respectively
// &a is must for input ,  used in line 5 and 9