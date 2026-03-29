#include <stdio.h>

int main(){
    char arr[100];
    printf("enter a string: ");
    // scanf("%s",arr); // this will not work on spaces
    fgets(arr,sizeof(arr),stdin);
    printf("%s",arr);

    // int len = 0;
    // while (arr[len] != '\0'){
    //     len ++;
    // }
    
    int i = 0;
    for(i = 0;i!='\0';i++);

    printf("length of string is : %d",i);
    return 0;
}