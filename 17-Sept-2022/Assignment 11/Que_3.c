// Write a program to create a function which returns the cube of all  its digits.
#include <stdio.h>
void printTheCubes(int a)
{
    int b, i = 1;
    while (a > 0)
    {
        b = a % 10;
        a /= 10;
        printf("The cube of digit %d of the number entered is %d\n", i, b * b * b);
        i++;
    }
}

void main()
{
    int a;
    printf("Enter your number\n");
    scanf("%d",&a);
    printTheCubes(a);
}