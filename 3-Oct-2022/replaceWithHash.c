// Write a program to read a string from the user and replace every space with '#'.
#include <stdio.h>
#include <string.h>
int word_count = 0;
void main()
{
    char str[100];
    char s[2] = {' '};
    printf("Enter your string\n");
    gets(str);
        strcat(s, str);
        for (int i = 0; i < strlen(s)-1; i++)
        {
            if (s[i] == ' ' && s[i + 1] != ' ')
            {
                s[i + 1]='#';
            }
        }
        puts(s);
}