#include <stdio.h>

int main()
{
    int i = 10; // declare and initialize 'i' with 10
    int j = i;
    // float i = 4 ;  // this is wrong we cannot declare value for 1 variable 2 times
    int a = 2, b = 3, c = 4 , d = 5;  // we can also assing value to variables like this
    //  %d is called format specifier 
    //  %d is for int , %f is for float , %c is for char
    printf("the value of i is %d and the value of j is %d\n", i,j);
    printf("the value of a is %d and the value of b is %d\n", a,b);
    printf("the value of c is %d and the value of d is %d\n", c,d);
    return 0;
}