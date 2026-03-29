// Insert Element at Specified Position
#include <stdio.h>

int main(){
    int arr[10], n;
    printf("enter number of elements\n");
    scanf("%d",&n);
    for (int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int pos ;
    printf("enter the position from 1 to %d",n);
    scanf("%d",&pos);
    if(pos <0 || pos >n){
        printf("invalid position ");
    }
    int val;
    printf("enter value to insert here");
    scanf("%d",&val);

    for (int i = n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=val;

    for(int i = 0;i<=n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}