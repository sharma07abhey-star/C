// Array Input and Display

#include <stdio.h>

int main(){
    int arr[10];
    printf("Enter 10 integers:\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }

    printf("You entered:\n");
    for(int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}