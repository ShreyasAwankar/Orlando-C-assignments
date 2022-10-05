// Write a program to create a user defined function to find the length of  a string. (like strlen())
#include <stdio.h>
#include <string.h>
int strlength(char *s1)
{
    int c = 0;
    while (*s1 != '\0')
    {
        c++;
        s1++;
    }
    *s1 = '\0';
    return c;
}
void main()
{
    char str1[] = "welcome Shreyas Awankar";
    printf("The length of the string is %d ", strlength(str1));    
}