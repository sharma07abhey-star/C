// print all unique elements in array 

#include <stdio.h>

int main(){
    int arr[100], size, i, j, isUnique;
    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unique elements in array: ");
    for (i = 0; i < size; i++) {
        isUnique = 1;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}