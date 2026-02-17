#include <stdio.h>

// increment and decrement

int main(){
    int i = 5;
    printf("the value of i is %d\n",i);
    i = i + 5;
    printf("the value of i after modification is %d\n",i);

    printf("the value of i is %d\n",i++); //10
    printf("the value of i is %d\n",i); //11

    //  i++ prints i first and then increments i ( post increment operataor)
    //  ++i increments i first and then prints i ( pre increment operator )

    return 0;
}