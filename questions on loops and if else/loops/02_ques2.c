#include <stdio.h>

int main(){
    int sum =0 ,average =0;
    for (int i = 0;i<10;i++){
        int a;
        scanf("%d",&a);
        sum += a;
    }
    printf("%d\n",sum);
    average = sum/10;
    printf("%d\n",average);
    return 0;
}