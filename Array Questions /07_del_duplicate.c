// delete duplicate elements from an array 

#include <stdio.h>

int main(){
    int arr[100], size, i, j, k;
    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Delete duplicate elements
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                // Shift elements to the left
                for (k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                size--;  // Reduce size
                j--;     // Check the new element at j
            }
        }
    }

    printf("Array after deleting duplicates: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
