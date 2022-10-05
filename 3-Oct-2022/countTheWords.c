// Write a program to read the string from user and count the words in it.
#include <stdio.h>
#include <string.h>
int word_count = 0;
void main()
{
    char str[1000];
    char s[2] = {' '};
    printf("Enter your string\n");
    gets(str);
        strcat(s, str);
        for (int i = 0; i < strlen(s)-1; i++)
        {
            if (s[i] == ' ' && s[i + 1] != ' ')
            {
                word_count++;
            }
        }
    printf("There are %d words in your string", word_count);
}