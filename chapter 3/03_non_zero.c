#include <stdio.h>

int main(){
    if(1){
        printf("this if is executed\n");
    }
    if(2345){
        printf("this if is also executed\n");
    }
    if(2.45){
        printf("this if is also executed\n");
    }
    if('c'){
        printf("this if is also executed\n");
    }
    if(0){
        printf("this if is not executed\n");
    }
    return 0;
}
// in c a non zero value is considered to be true 
// a zero value is considered to be false which do not executes