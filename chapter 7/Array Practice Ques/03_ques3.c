// Student Marks (Sum and Average)
#include <stdio.h>

int main() {
    int marks[10];
    int sum = 0;
    float average;

    printf("Enter marks of 10 students:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    average = sum / (float)10;

    printf("Total marks: %d\n", sum);
    printf("Average marks: %.2f\n", average);

    return 0;
}