// Write a C program using concept of arrays / structures that allows you to enter records of students,
// input their name, roll number, and marks
// for three subjects, and then calculates the average marks for each student and display it.

#include <stdio.h>

struct students {
    char name[20];
    int roll ;
    int marks[3] ;
    float avg ;
};
void inputstudent(struct students *s,int num){
    printf("Enter details for student %d",num);
    printf("Name   : ");
    scanf("%s",s->name);
    printf("Roll No   :");
    scanf("%d",&s->roll);
    printf("Marks in 3 subjects  :");
    for(int j = 0;j<3;j++){
        scanf("%d",&s->marks[j]);
    }
}

void clalavg(struct students *s){
    int sum = 0;
    for(int j = 0;j<3;j++){
        sum += s->marks[j];
    }
    s->avg = sum/3.0 ;
}

void displayStudent(struct students s)
{
    printf("%-15s %-10d %-10d %-10d %-10d %-10.2f\n",
           s.name,
           s.roll,
           s.marks[0],
           s.marks[1],
           s.marks[2],
           s.avg);
}

int main(){
    int n;
    printf("Enter number of students = \n");
    scanf("%d",&n);
    struct students s1[50];
    for(int i = 0;i<n;i++){
        inputstudent(&s1[i],i+1);
    }
    for (int i = 0; i < n; i++)
        clalavg(&s1[i]);

    for (int i = 0; i < n; i++)
        displayStudent(s1[i]);
    return 0;
}