#include <stdio.h>

// create a function to print good morning ,afternoon and evening

void good_morning();
void good_afternoon();
void good_evening();

void good_morning(){
    printf("good morning\n");
}
void good_afternoon(){
    printf("good afternoon\n");
}
void good_evening(){
    printf("good evening\n");
}
int main(){
    good_morning();
    good_afternoon();
    good_evening();
    return 0;
}

// void is a function that does not return a value
// it is used when we do not need to return any value from the function