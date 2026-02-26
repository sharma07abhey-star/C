// count and print sum of prime elements in an array
#include <stdio.h>

int main(){
    int arr[100], size, i, j, sum = 0, isPrime;
    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++) {
        isPrime = 1;
        if (arr[i] <= 1) {
            isPrime = 0;
        } else {
            for (j = 2; j <= arr[i] / 2; j++) {
                if (arr[i] % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }
        if (isPrime) {
            sum += arr[i];
        }
    }

    printf("Sum of prime elements in array: %d\n", sum);
    return 0;
}