//  insert element at specified position in an array 

#include <stdio.h>
#define max_size 100

int main(){
    int arr[max_size];
    int i,size,num,pos;
    // input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    // input elements of the array
    printf("Enter the elements of the array: ");
    for(i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    // input element to be inserted and position
    printf("Enter the element to be inserted: ");
    scanf("%d", &num);
    printf("Enter the position to insert the element: ");
    scanf("%d", &pos);
    // shift elements to the right
    for(i = size; i > pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = num;
    size++;
    // print updated array
    printf("Updated array: ");
    for(i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}