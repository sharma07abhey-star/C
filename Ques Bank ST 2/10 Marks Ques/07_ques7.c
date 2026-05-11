// Problem 7: Countdown Timer for Fitness Routine
// Title: Fitness Timer for Workouts
// Create a countdown timer for a fitness workout that counts down from a 
// user-defined number of seconds and displays each second in real-time.

#include <stdio.h>
#include <unistd.h>

int main(){
    int seconds ;
    scanf("%d",&seconds);
    while(seconds > 0){
        printf("%d\n",seconds);
        sleep(1);
        seconds--;
    }
    return 0;
}