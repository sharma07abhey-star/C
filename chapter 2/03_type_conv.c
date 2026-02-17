#include <stdio.h>

int main()
{
    int a = 20;
    int b = 5;
    float c = a / b;
    printf("the value of a/b is %f\n", c);

    int d = 6.67;    // storing float value in int

    float x = a + b; // implicit type conversion
    printf("the value of x is %f\n", x);

    int sum = (int)c + 1; // explicit type conversion
    printf("%d",sum);

    printf("the value of d is %d", d); // an wrong output of 6 is generated without giving an error

    return 0;
}

//  an arithmetic operation between
// int and int = int
// float and float = float
// int and float = float