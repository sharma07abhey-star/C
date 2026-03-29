#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 1, 3, 3};
    int n = 7;
    for(int i = 0;i<n;i++){
        if(arr[i] == 0) continue;

        int count = 1;
        for(int j = i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count += 1;
                arr[j] = 0;
            }
        }
        printf("%d appears %d times\n",arr[i],count);
    }
    
    return 0;
}