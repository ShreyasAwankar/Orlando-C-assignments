// Write a program to reverse every word of the string.
#include <stdio.h>
#include <string.h>
void revWord(char s[1000])
{
    int i, len;
    char ch;

    len = strlen(s) - 1;
    i = 0;

    while (i < len)
    {
        ch = s[len];
        s[len] = s[i];
        s[i] = ch;
        i++;
        len--;
    }
}
int main()
{
    char str[1000];
    char rev[1000] = "";
    char temp[30];
    int l, i, j;
    printf("Enter the sring: \n");
    gets(str);
    printf("\nsring before reversing the words: %s \n", str);
    puts(str);
    l = strlen(str);
    for (i = 0; i < l; i++)
    {

        for (j = 0; i < l && str[i] != ' '; i++, j++)
        {
            temp[j] = str[i];
        }
        temp[j] = '\0';
    }
    strcat(rev, temp);
    strcat(rev, " ");
    printf("\nstring after reversing the word: %s", str);
    puts(str);
}
