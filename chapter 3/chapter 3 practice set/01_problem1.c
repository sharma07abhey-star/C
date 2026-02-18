#include <stdio.h>

// determine the student is pass or fail to pass he needs at least 40 % in all subjects
//  and 33 % in each subject , take input of marks from user

int main()
{
    int c;
    scanf("%d", &c);
    int python;
    scanf("%d", &python);
    int java;
    scanf("%d", &java);
    int average = (c + python + java) / 3;
    if ((c < 33 || python < 33 || java < 33))
    {
        printf("you are failed due to less marks in individual subject");
    }
    else if (average < 40)
    {
        printf("you are failed due to less than 40 in combined subjects");
    }
    else
    {
        printf("you are pass");
    }
    return 0;
}