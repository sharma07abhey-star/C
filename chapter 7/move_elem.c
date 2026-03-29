#include <stdio.h>

int main(){
    int arr[]= {1,8,-1,7,-5,6};
    int n = 6;
    int neg[100] ,negcount = 0;
    int poscount = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]<0){
            neg[negcount] = arr[i];
            negcount ++;
        }
    }
    for(int i = 0;i<n;i++){
        if(arr[i]>0){
            arr[poscount] = arr[i];
            poscount ++;
        }
    }
    for(int i = 0;i<negcount;i++){
        arr[poscount] = neg[i];
        poscount ++;
    }
    for(int i = 0;i<n;i++){
        printf("%d",arr[i]);
    }

    return 0;
}