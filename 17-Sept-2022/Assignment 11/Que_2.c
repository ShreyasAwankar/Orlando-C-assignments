// Write a program to read a number from user and and find the multiplications of all its digits and check if the result is perfect or not.
#include <stdio.h>
void main()
{
    int a, b, mult = 1, actual_mult, sum = 0;
    printf("Enter your number\n");
    scanf("%d", &a);
    while (a > 0)
    {
        b = a % 10;
        a /= 10;
        mult *= b;
    }
    int i = 1;
    while (i < mult - 1)
    {
        if (mult % i == 0)
        {
            sum += i;
        }
        i++;
    }
    if (sum == mult)
        printf("The sum of multiplication of all the digits in the number entered is a perfect number.");
    else
        printf("The sum of multiplication of all the digits in the number entered is not a perfect number.");
}