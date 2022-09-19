#include <stdio.h>
void main()
{
    int student, students, subject, subjects;
    printf("Enter the number of students\n");
    scanf("%d", &students);
    printf("How many subjects\n");
    scanf("%d", &subjects);
    for (student = 1; student <= students; student++)
    {
        printf("Student %d\n", student);
        subject = 1;
        for (subject; subject <= subjects; subject++)
        {
            printf("\tSubject %d\n ", subject);
        }
    }
}