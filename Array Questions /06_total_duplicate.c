// count total duplicate elements in an array 

#include <stdio.h>

int main(){
    int arr[100], size, i, j, count = 0;
    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break;
            }
        }
    }

    printf("Total duplicate elements in array: %d\n", count);
    return 0;
}