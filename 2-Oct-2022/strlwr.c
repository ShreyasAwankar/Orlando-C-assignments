// Write a program to create a user defined function to convert a string into uppercase. (like strupr())
#include <stdio.h>
void upper(char *s1)
{
    for (s1; *s1 != '\0'; s1++)
    {
        if (*s1 >= 'A' && *s1 <= 'Z')
            *s1 = *(s1)+32;
    }
    *s1 = '\0';
}

void main()
{
    char str1[] = "WELCOME TO ORLANDO";
    printf("The string in lowercase is --> ");
    puts(str1);
    upper(str1);
    printf("The string into uppercase is --> ");
    puts(str1);
}