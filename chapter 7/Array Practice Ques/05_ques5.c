// Find First and Second Largest Element
#include <stdio.h>

int main(){
    int arr[10];
    for(int i = 0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for (int i = 0;i<10;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("first largest = ");
    printf("%d",max);
    int sec_max = arr[0];
    for (int i = 0;i<10;i++){
        if(arr[i]>sec_max && arr[i]<max){
            sec_max = arr[i];
        }
    }
    printf("second largest = ");
    printf("%d",sec_max);
    return 0;
}