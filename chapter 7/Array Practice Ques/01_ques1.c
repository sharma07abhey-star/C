#include <stdio.h>

int main(){
    int arr[10];
    for(int i= 0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for(int i= 0;i<10;i++){
        sum += arr[i];
    }
    int average = sum/10;
    printf("average =\n");
    printf("%d\n",average);
    int max = arr[0];
    for (int i=0;i<10;i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }
    int min = arr[0];
    for(int i = 0;i<10;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("max\n");
    printf("%d\n",max);
    printf("min\n");
    printf("%d\n",min);
    return 0;
}