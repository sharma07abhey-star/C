// #include <stdio.h>

// int main(){
//     // condition ? expression-if-true : expression-if-false
//     int a = 18;
//     int b = 34;
//     (a>=b) ? printf("the expression is true and a is greater") : printf(" the expression is false and b is greater");
//     return 0;
// }

#include <stdio.h>

int main() {
    int a, b, c, greatest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    greatest = (a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("Greatest number is: %d", greatest);
    return 0;
}