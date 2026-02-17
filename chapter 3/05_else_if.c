#include <stdio.h>

int main(){
   int age = 65;
   if (age>60){
    printf("you can drive and you are senior citizen\n");
   }
   else if (age > 18 && age<60){
    printf("you can drive but you are not senior citizen\n");
   }
   else{
    printf("you cannot drive ");
   }
    return 0;
}
//  the code can be executed without else also 
//  there can be any number of if and else if statements
//  last else is executed only if all conditions fails