#include <stdio.h>

// function prototype
int sum(int,int);

// function definition
int sum(int x , int y){
    printf("the sum is %d\n",x+y);
    return x+y;
}
int main(){
    int a = 23;
    int b = 34;
    sum(a,b);

    int c = 56;
    int d = 89;
    sum(c,d);

    // alternative method
    sum(45,49);
    
    return 0;
}


// // function to print hello and good bye
// #include <stdio.h>

// void printhello();
// void printgoodbye();
// int main(){
//     printhello();
//     printgoodbye();
//     return 0;
// }

// void printhello(){
//     printf("hello "
//     );
// }

// void printgoodbye(){
//     printf("goodbye !"
//     );
// }