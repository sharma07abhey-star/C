#include <stdio.h>

int main(){
    char names[5][20] = {
        "alice",
        "bob",
        "charlie",
        "eve",
        "diana"
    };
    printf("list of names:\n");
    int i;
    for (i = 0;i<5;i++){
        printf("%d. %s\n",i+1,names[i]);
    }
    return 0;
}