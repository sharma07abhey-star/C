#include <stdio.h>

int main(){
    int pin = 1234;
    int attempts = 3;
    int pass;
    for (int i = 1; i < 4; i++)
    {
        scanf("%d",&pass);
        if(pass == pin){
            printf("access granted\n");
            break;
        }
        else{
            attempts=attempts-1;
            printf("attempts left : %d\n",attempts);
        }
    }
    if (attempts==0){
        printf("phone locked for 30 sec\n");
    }
    return 0;
}