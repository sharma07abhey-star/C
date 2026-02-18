#include <stdio.h>

int change(int a){
    a = 10;
    return a;
}
int main(){
    int b = 22;
    b = change(b);

    // the actual value of b remains 22 only the value
    // returned by the function is assigned to b
    
    printf("%d\n", b);
    return 0;
}