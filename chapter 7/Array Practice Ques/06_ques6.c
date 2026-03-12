// Print All Negative Elements
#include <stdio.h>

int main() {
    int arr[10];
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Negative elements are:\n");
    for (int i = 0; i < 10; i++) {
        if (arr[i] < 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}