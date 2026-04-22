#include <stdio.h>
int main(){
    int *p1,*p2;
    p1 = (int*)1;
    p2 = (int*)2;
    if(p2>p1){
        printf("p2 is greater than p1\n");
    }
    else{
        printf("p1 is greater than p2\n");
    }
    return 0;
}