// Write a program to read a number from user and check if its second last digit is less than last digit then display all the numbers between two digits otherwise display in reverse order using for loop, while loop and do while loop.
#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter the number\n");
    scanf("%d", &a);
    b = a % 10;
    c = a % 100;
    c /= 10;
    if (c < b)
    {
        for (c; c <= b; c++)
        {
            printf("%d \t", c);
        }
    }
    else
    {
        for (c; c <= b; c--)
    
        {
            printf("%d \t", c);
        }
    }
}
