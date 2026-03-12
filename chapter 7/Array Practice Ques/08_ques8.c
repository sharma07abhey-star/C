// Insert Element at Specified Position
#include <stdio.h>

int main() {
    int arr[10], n, pos, value;

    printf("Enter number of elements (max 10): ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to insert (0 to %d): ", n);
    scanf("%d", &pos);
    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 1;
    }

    printf("Enter value to insert: ");
    scanf("%d", &value);

    // Shifting elements to the right 
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;

    printf("Array after insertion:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}