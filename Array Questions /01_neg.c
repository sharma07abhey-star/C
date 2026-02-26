// print all negative element in array after taking input 

#include <stdio.h>

int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    printf("All negative elements in the array are: ");
    for(int i = 0; i < size; i++){
        if(arr[i] < 0){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}