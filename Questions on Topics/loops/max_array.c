#include <stdio.h>

int main(){
    int max = 0;
    int arr[5] = {1, 2, 8, 4, 5};
    for(int i = 0; i < 5; i++){
        if(max < arr[i])
            max = arr[i];
        printf("%d ", arr[i]);
    }
    printf("\nMax: %d\n", max);
    return 0;
}