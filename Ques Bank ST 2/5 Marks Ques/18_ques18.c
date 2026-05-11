// Problem 18: Array of Structures for Employee Records
// Title: Managing Employee Records
// Define a structure called Employee with fields for name (string), employee ID (integer),
// and salary (float). Use an array of
// structures to store details for 3 employees and display their details.

#include <stdio.h>

struct employee{
    char name[50];
    int employeeId ;
    float salary ;
};

int main(){
    int n;
    scanf("%d",&n);
    struct employee emp1[n];
    for(int i = 0;i<n;i++){
        scanf("%s",emp1[i].name);
        scanf("%d",&emp1[i].employeeId);
        scanf("%f",&emp1[i].salary);
    }
    printf("Employee details :");
    for(int i = 0;i<n;i++){
        printf("Employee = %d\n Name : %s\n  Id : %d\n Salary : %.2f\n ",
        i + 1, emp1[i].name , emp1[i].employeeId , emp1[i].salary);
    }
    return 0;
}