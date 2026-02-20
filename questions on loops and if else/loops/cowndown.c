#include <stdio.h>

int main(){
    int countdown = 10;
    for (int i =countdown;i>=0;i--){
        if (i==5){
            printf("ignition sequence start\n");
        }else if (i==0)
        {
            printf("lift off\n");
        }else{
            printf("%d\n",i);
        }
        
    }
    return 0;
}