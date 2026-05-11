#include <stdio.h>

int power(int n,int count){
    int a = 1;
    for(int i = 0;i<count;i++){
        a *= n;
    }
    return a;
}
void isarmstrong(int n){
    int temp = n;
    int temp2 = n;
    int count = 0;
    int sum = 0;
    while(n!=0){
        int digit = n%10;
        count ++;
        n/=10;
    }
    while(temp != 0){
        int digit = temp % 10;
        sum += power(digit,count);
        temp /= 10;
    }
    if( temp2 == sum){
        printf("Armstrong");
    }else{
        printf("Not Armstrong");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    isarmstrong(n);
    return 0;
}