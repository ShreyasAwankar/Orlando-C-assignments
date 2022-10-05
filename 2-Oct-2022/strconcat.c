// Write a program to create a user defined function to concat a string into another. (like strcat())
#include <stdio.h>
#include <string.h>
void strconcat(char *s1, char *s2)
{
    while (*s1 != '\0')
    {
        s1++;
    }
    while (*s2 != '\0')
    {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
}
void main()
{
    char str1[] = "welcome";
    char str2[] = "hello";
    printf("String 1 before concatination --> ");
    puts(str1);
    strconcat(str1, str2);
    printf("String 1 after concatination --> ");
    puts(str1);
}