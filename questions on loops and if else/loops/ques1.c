#include <stdio.h>

int main(){
    int n = 1122322 , d=2;
    int c = 0;
    while (n>0){
        if (n%10 == d){
            c++;
        }
        n = n/10;
    }
    printf("%d",c);
    return 0;
}
// this program counts the occurrences of a digit in a numberr