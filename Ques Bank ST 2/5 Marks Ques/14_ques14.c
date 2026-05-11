// Ten numbers are entered from the keyboard into an array. The number to be searched 
// is entered through the keyboard by the user.
// Write a program to find if the number to be searched is 
// “found” or “not found” in the array and if it is found then display the
// number of times it appears in the array.


#include <stdio.h>

int main(){
    int arr[10];
    int n;
    int count = 0 ;
    for(int i = 0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter number to search ");
    scanf("%d",&n);

    for(int i = 0;i<10;i++){
        if(arr[i] == n){
            count ++;
        }
    }
    if(count == 0){
        printf("Not found");
    }else{
        printf("Found %d times",count);
    }

    return 0;
}