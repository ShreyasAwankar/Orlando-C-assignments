// Write a program to read a string from user and count vowels and consonents...

#include <stdio.h>
void main()
{
    char str[20];
    // int c1 = 0, c2 = 0;
    printf("Enter your string\n");
    gets(str);
    for (int i = 0; i < 20; i++)
    {
        printf("%c ", str[i]);
    }
}