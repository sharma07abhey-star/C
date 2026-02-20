#include <stdio.h>

int main(){
    int sum = 0;
    int a , b;
    scanf("%d %d",&a,&b);
    if (b>=a){
        for (int i =a;i<=b;i++){
            if(i%2!=0){
                sum += i;
            }
        }
    }
    else{
        for(int i=b;i<=a;i++){
            if(i%2!=0){
                sum += i;
            }
        }
    }
    printf("%d",sum);
    return 0;
}
// if a = 20 and b = 15 then output will be 51 .