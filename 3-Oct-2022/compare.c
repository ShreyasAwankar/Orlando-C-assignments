// Write a program to create a userdefined strcmp function.
#include <stdio.h>
#include <string.h>
int strcompare(char *s1, char *s2)
{
    while (*s1 != *s2)
    {
        return *s1 - *s2;
        s1++;
        s2++;
    }
    return 0;
}

void main()
{
    char str1[30];
    char str2[30];
    printf("Enter the first string without space\n");
    gets(str1);
    printf("Enter the second string without space\n");
    gets(str2);
    if (strcompare(str1, str2) == 0)
        printf("Both strings are equal.");
    else
        printf("The ASCII value diference between first unmatched pair charecters is %d ", strcompare(str1, str2));
}