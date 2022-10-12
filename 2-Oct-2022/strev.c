// Write a program to create a user defined function to reverse a string. (like strrev())
#include <stdio.h>
#include <string.h>
void strreverse(char *s1, char *s2)
{
    while (*s1 != '\0')
    {
        s2++;
    }
    for (s2;s2>=(s2-strlen(s2));s2--)
    {
        *s1=*s2;
        s1++;
    }
    *s1='\0';

}
void main()
{
    char str1[] = "Welcome";
    char str2[] = "";
    printf("Origional String is --> ");
    puts(str1);
    strcpy(str2,str1);
    strreverse(str1,str2);    
    printf("Reversed String is --> ");
    puts(str1);
}