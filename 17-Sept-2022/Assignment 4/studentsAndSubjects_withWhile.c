// Write a program to read number of students and number of subjects from the user and and display all the subjects for each students with for loop while loop and do while loop.

#include <stdio.h>
void main()
{
    int student, students, subject, subjects;
    printf("Enter the number of students\n");
    scanf("%d", &students);
    printf("How many subjects\n");
    scanf("%d", &subjects);
    student = 1;
    while (student <= students)
    {
        printf("Student %d\n", student);
        subject = 1;
        while (subject <= subjects)
        {
            printf("\tSubject %d\n ", subject);
            subject++;
        }
    student++;
    }
}