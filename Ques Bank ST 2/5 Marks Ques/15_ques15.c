// Write a program in C to print the difference of largest and smallest number 
// in an array of 5 elements. Input will be taken as 5
// integer numbers and save these numbers in an array. Find the largest and 
// smallest number from this array. Calculate the difference
// (largest-smallest). Print this difference as output.

#include <stdio.h>

int main(){
    int arr[5];
    int smallest = arr[0];
    int largest = arr[0];
    for(int i = 0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<5;i++){
        if(arr[i] >largest){
            largest = arr[i];
        }
    }
    for(int i = 0;i<5;i++){
        if(arr[i] <smallest){
            smallest = arr[i];
        }
    }
    int difference = largest - smallest ;
    printf("%d",difference);
    return 0;
}