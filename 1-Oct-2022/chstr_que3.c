// Write a program to read a 2 character from user and multiply them...
#include <stdio.h>
#include <conio.h>
void main()
{
A:
    char ch1, ch2;
    int d1, d2, mul;
    printf("Enter first character\n");
    scanf("%c", &ch1);
    printf("Enter second character\n");
    scanf(" %c", &ch2);
    if (ch1 >= 48 && ch1 <= 57 && ch2 >= 48 && ch2 <= 57)
    {
        d1 = ch1 - 48;
        d2 = ch2 - 48;
        mul = d1 * d2;
        printf("The multiplication is %d", mul);
    }
    else
        printf("The input character should range between 0-9\n");
    goto A;
}