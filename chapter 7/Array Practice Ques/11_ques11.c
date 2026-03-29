// Removes Duplicates From Sorted Array
#include <stdio.h>

int main(){
    int arr[10],size;
    scanf("%d",&size);
    for(int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int ar[10];
    int unique_idx = 0;
    for(int i = 1;i<size;i++){
        if (arr[i] != arr[unique_idx]){
            unique_idx ++;
            arr[unique_idx] = arr[i];
        }
    }
    size = unique_idx + 1;
    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}