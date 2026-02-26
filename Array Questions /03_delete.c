// delete element from specified position in an array
#include <stdio.h>

int main(){
    int arr[100], size, pos, i;
    // input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    // input elements of the array
    printf("Enter the elements of the array: ");
    for(i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    // input position to delete the element
    printf("Enter the position to delete the element: ");
    scanf("%d", &pos);
    // shift elements to the left
    for(i = pos; i < size - 1; i++){
        arr[i] = arr[i + 1];
    }
    size--;
    // print updated array
    printf("Updated array: ");
    for(i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}