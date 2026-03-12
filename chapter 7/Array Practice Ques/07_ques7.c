// Copy Array to Another Array
#include <stdio.h>

int main() {
    int arr[10], copy[10];
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Copying elements from arr to copy
    for (int i = 0; i < 10; i++) {
        copy[i] = arr[i];
    }

    printf("Copied array elements are:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", copy[i]);
    }
    printf("\n");
    return 0;
}