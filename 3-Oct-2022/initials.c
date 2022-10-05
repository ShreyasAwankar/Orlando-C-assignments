// Write a program to read the string from user and count the words in it and print the initials.
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
                printf("%c ", s[i + 1]);
            }
        }
}