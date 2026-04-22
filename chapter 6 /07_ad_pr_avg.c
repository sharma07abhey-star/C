// write a function to calculate sum product and average of 2 numbers in c with the help of pointers
#include <stdio.h>

void dowork(int a ,int b ,int *sum , int *prod , int *avg);
int main(){
    int a = 5;
    int b = 10;
    int sum , prod , avg;
    dowork(a,b,&sum , &prod , &avg);
    printf("sum = %d\n product = %d\n average = %d\n" , sum , prod , avg);
    return 0;
}
void dowork(int a , int b ,int *sum , int *prod , int *avg ){
    *sum = a + b;
    *prod = a * b;
    *avg = (a + b)/2;
}


//  so what basically occurs in the above code is 
// 1. The function dowork is called with the values of a and b, and the addresses of sum, prod, and avg.
// 2. Inside the dowork function, the values of a and b are used to calculate the sum, product, and average.
// 3. The results are stored in the variables pointed to by the pointers sum, prod, and avg.