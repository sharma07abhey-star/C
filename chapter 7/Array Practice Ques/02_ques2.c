// Count Odd, Even, Positive, Negative
#include <stdio.h>

int main(){
    int arr[10];
    int odd_count = 0, even_count = 0, positive_count = 0, negative_count = 0;

    printf("Enter 10 integers:\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 10; i++){
        if(arr[i] % 2 == 0){
            even_count++;
        } else {
            odd_count++;
        }

        if(arr[i] > 0){
            positive_count++;
        } else if(arr[i] < 0){
            negative_count++;
        }
    }

    printf("Odd count: %d\n", odd_count);
    printf("Even count: %d\n", even_count);
    printf("Positive count: %d\n", positive_count);
    printf("Negative count: %d\n", negative_count);

    return 0;
}