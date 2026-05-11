// search element in an array 
#include <stdio.h>
int main(){
    int arr[5];
    int element;
    int pos = 1;
    int flag = 0;
    for(int i = 0 ;i<5;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&element);
    for(int i = 0;i<5;i++){
        if(element == arr[i]){
            pos = i+1;
            printf("%d",pos);
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        pos = -1;
        printf("%d",pos);
    }

    return 0;
}