// Problem 19: Structure with Array Members
// Title: Storing Marks for Multiple Subjects
// Create a structure called StudentMarks that stores the name of the student
// (string) and an array of marks for 3 subjects (integers).
// Write a program to take input and display the total marks for all subjects.

#include <stdio.h>

struct students{
    char name[20];
    int marks[3];
};
int main(){
    struct students s1;
    int total_marks = 0;
    scanf("%s",s1.name);
    for(int i = 0;i<3;i++){
        scanf("%d",&s1.marks[i]);
    }
    for(int i = 0;i<3;i++){
        total_marks += s1.marks[i]; 
    }
    printf("%d\n",total_marks);

    return 0;
}