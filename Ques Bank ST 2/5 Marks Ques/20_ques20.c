// Problem 20: Searching Employee Records Using Array of Structures
// Title: Search for an Employee by ID
// Define a structure Employee with name (string), employee ID (integer), and salary (float).
// Store details for 5 employees in an array of structures. Allow the user to enter an 
// employee ID and search for the correspond

#include <stdio.h>
#include <string.h>

struct employee{
    char name[20];
    int Id ;
    float salary ;
};
int main(){
    struct employee emp[5] = {
        {"Abhey", 1001, 50000},
        {"Shreyas", 1002, 60000},
        {"Sharma", 1003, 55000},
        {"Virat", 1004, 47000},
        {"Kl Rahul", 1005, 52000}
    };
    int searchId ;
    scanf("%d",&searchId);
    int found = 0;
    for(int i = 0;i<5;i++){
        if(searchId == emp[i].Id){
            printf("%s %.2f\n", emp[i].name, emp[i].salary);
            found = 1;
            break;
        }
    }
    if(!found){
        printf("Employee does not exist in the record");
    }

    return 0;
}