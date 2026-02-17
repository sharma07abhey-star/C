// #include <stdio.h>

// // factorial of a given number using for loop

// int main(){
//     int product = 1;
//     int n = 4;
//     for (int i = 1;i<=n;i++){
//         product *= i;
//     }
//     printf("the factorial of number is %d\n",product);
//     return 0;
// }

//  factorial using while loop 

#include <stdio.h>

int main(){
    int i = 1 ,product = 1 ,n = 4;
    while (i<=n){
        product *= i;
        i ++ ;
    }
    printf("%d",product);
    return 0;
}