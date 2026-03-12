// insert in middle of an array
#include <stdio.h>

int main(){
    int arr[100], n, i, pos, value;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert the new element: ");
    scanf("%d", &pos);

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    // Shift elements to the right
    for(i = n; i >= pos; i--){
        arr[i] = arr[i-1];
    }

    // Insert the new element
    arr[pos] = value;

    // Update the size of the array
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}