#include <stdio.h>
void main()
{
    int student, students, subject, subjects;
    printf("Enter the number of students\n");
    scanf("%d", &students);
    printf("How many subjects\n");
    scanf("%d", &subjects);
    student = 1;
    do
    {
        printf("Student %d\n", student);
        subject = 1;
        do
        {
            printf("\tSubject %d\n ", subject);
            subject++;
        }while (subject <= subjects);
    student++;
    }while (student <= students);
}