// Write a program to read a character from user and check ther character is upper case Or lower case..
#include <stdio.h>
void main()
{
    char c;
    printf("Enter an alphabet:\n");
    scanf("%c", &c);
    if(c>='a' && c<='z')
    printf("Entered alphabet is lowercase");
    else if(c>='A' && c<='Z')
    printf("Entered alphabet is uppercase");
    else
    printf("Entered character is not an alphabet");
}