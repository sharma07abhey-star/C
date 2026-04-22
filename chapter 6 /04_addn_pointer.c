// program for pointer addition
#include <stdio.h>
int main(){
    int a = 50;
    int b = 3;
    int*p ;
    p = &b;
    printf("address of p variable is %u\n",p);
    p = p+b;
    printf("after adding 3 , address of p variable is %u\n",p);
    return 0;
}


// // pointer arithmetic in c
// #include <stdio.h>
// int main(){
//     int a = 20;
//     int*p;
//     p = &a;
//     printf("pointer before increment :");
//     printf("%p\n",p);
//     p--;
//     printf("pointer after increment :");
//     printf("%p\n",p);
//     return 0;
// }