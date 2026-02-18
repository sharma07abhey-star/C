#include <stdio.h>

int main(){
    int a = 3, b = 45, c = 69 , d = 50;
    if (a> b && a >c && a>d){
        printf("the greatest of all is a : %d",a);
    }
    else if (b> a && b >c && b>d){
        printf("the greatest of all is b : %d",b);
    }
    else if (d> b && d >c && d>a){
        printf("the greatest of all is d : %d",d);
    }
    else{
        printf("the greatest of all is c : %d",c);
    }
    return 0;
}