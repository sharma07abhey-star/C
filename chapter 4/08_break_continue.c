#include <stdio.h>

int main(){
    for (int i = 0; i < 15; i++)
    {
        if(i == 5){
            // break;
            continue; // skip the current iteration 
        }
        printf("i is %d\n", i);
    }
    printf("the program is done");

    return 0;
}

// break means --> exit the loop now , no matter what ...
// continue means --> pass the current iteration 