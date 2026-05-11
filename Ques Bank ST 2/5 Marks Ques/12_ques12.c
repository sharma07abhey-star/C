#include <stdio.h>
#define MAX_SIZE 100

void findLargestAndSecondLargest(int arr[], int size){
    int i, largest, secondLargest;

    largest = arr[0];
    secondLargest = arr[1];

    if(secondLargest > largest){
        int temp = largest;
        largest = secondLargest;
        secondLargest = temp;
    }
    for(i = 2; i < size; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }
    }

    printf("Largest: %d\nSecond Largest: %d", largest, secondLargest);
}

int main(){
    int arr[MAX_SIZE];
    int size, i;

    scanf("%d", &size);

    if(size < 2){
        printf("Need at least 2 elements");
        return 0;
    }

    for(i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    findLargestAndSecondLargest(arr, size);
    return 0;
}