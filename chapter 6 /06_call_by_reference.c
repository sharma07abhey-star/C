#include <stdio.h>

void _square(int *n);
int main(){
    int num = 5;
    _square(&num);
    printf(" number = %d\n",num);
    return 0;
}
// call by reference
void _square(int *num){
    *num = (*num) * (*num);
    printf(" square = %d\n",*num);
}