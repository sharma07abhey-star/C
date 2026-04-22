#include <stdio.h>

int main(){
    int a = 0;
    int b = 1;
    int n ;
    scanf("%d",&n);
    
    for(int i=2 ;i<=n;i++){
        printf("%d\n",a);
        int c = a + b;
        a = b;
        b = c;
    }
    return 0;
}