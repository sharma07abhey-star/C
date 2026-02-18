// write a program to implement problem 3 using for and do while loop 

// for loop

// #include <stdio.h>
// int main(){
//     int sum = 0;
//     for (int i=0;i<=10;i++){
//         sum += i;
//     }
//     printf("%d",sum);
//     return 0;
// }

// using do while loop

#include <stdio.h>

int main(){
    int i =0 , sum = 0;
    do
    {
        sum += i;
        i += 1;
    } while (i<=10);
    printf("%d",sum);
    
    return 0;
}