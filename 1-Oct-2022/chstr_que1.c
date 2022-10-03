// Write a program to read a character from user and print the character is vowel, comsonent Or number...
#include <stdio.h>
void main()
{
    char c;
    printf("Enter an alphabet/digit:\n");
    scanf("%c", &c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        printf("\'%c\' is a vowel.", c);
    else if (c >= '0' && c<='9' )
    printf("\'%c\' is a number",c);
    else
        printf("\'%c\' is a consonant.", c);
}