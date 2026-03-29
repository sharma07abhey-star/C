#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Hello , World!";
    // fgets(str,sizeof(str),stdin);
    int length = strlen(str);
    printf("Length : %d\n",length);
    return 0;
}