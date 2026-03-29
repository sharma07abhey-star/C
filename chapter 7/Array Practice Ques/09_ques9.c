// Delete Element from Specified Position
#include <stdio.h>

int main(){
    int arr[10],n,pos;
    scanf("%d",&n);
    for (int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nenter the position where you want to delete element");
    scanf("%d",&pos);
    for(int i= pos;i<n;i++){
        arr[i] = arr[i + 1];
    }
    for(int i = 0;i<n-1;i++){
        printf("%d",arr[i]);
    }
    return 0;
}