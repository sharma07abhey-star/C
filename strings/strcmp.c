#include <stdio.h>
#include<string.h>

int main(){
    char s1[] = "apple";
    char s2[] = "banana";
    int result = strcmp(s1,s2);
    printf("Result: %d\n",result);
    if(result <0){
        printf("s1 is greater\n");
    }
    else if (result >0){
        printf("s2 is greater\n");
    }
    else{
        printf("strings are equal\n");
    }
    return 0;
}