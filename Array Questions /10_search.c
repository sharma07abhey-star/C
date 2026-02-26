// search an element in an array 

#include <stdio.h>

int main(){
    int arr[100], size, i, search, found = 0;
    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    for (i = 0; i < size; i++) {
        if (arr[i] == search) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Element %d found at index %d\n", search, i);
    } else {
        printf("Element %d not found in array\n", search);
    }

    return 0;
}