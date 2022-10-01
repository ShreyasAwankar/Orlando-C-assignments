// Write a menu driven program
// choice 1 : Check for perfect number.
// choice 1 : Check for palindrome number.
// choice 1 : Check for Armstrong number.
// Using functions.

// This program may not work in vs code for Armstrong number in VS code but it worked on other online compilers
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int perfect(int a)
{
    int sum = 0;
    for (int i = 1; i <= a / 2; i++)
    {
        if (a % i == 0)
            sum += i;
    }
    if (sum == a)
        return 1;
    return 0;
}

int Armstrong(int a)
{
    int b = a, c, sum = 0, count = 0;
    c = a;
    while (c > 0)
    {
        count++;
        c /= 10;
    }
    while (a > 0)
    {
        sum += pow(a % 10, count);
        a /= 10;
    }
    if (sum == b)
        return 1;
    return 0;
}

int palindrome(int a)
{
    int reversed = 0, r, b = a;
    while (a > 0)
    {
        r = a % 10;
        reversed = reversed * 10 + r;
        a /= 10;
    }
    if (reversed == b)
        return 1;
    return 0;
}

void main()
{
    char option = 'y';
    do
    {
        int x, choice;
        printf("Enter a number\n");
        scanf("%d", &x);
    ABC:
        printf("Enter your choice\n 1 -> To check for a perfect number \n 2 -> To check for an Armstrong number \n 3 -> To check for a palindrome number.\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if (perfect(x) == 0)
                printf("The given number is not a perfect number.\n");
            else
                printf("The given number is a perfect number.\n");
            break;
        case 2:
            if (Armstrong(x) == 1)
                printf("The given number is an Armstrong number.\n");
            else
                printf("The given number is not an Armstrong number.\n");
            break;
        case 3:
            if (palindrome(x) == 0)
                printf("The given number is not a palindrome number.\n");
            else
                printf("The given number is a palindrome number.\n");
            break;
        case 4:
            exit(0);
        default:
            printf("Please enter the correct choice out of 1,2,3,4.\n");
            goto ABC;
        }
        printf("Do you want to continue?[y/n]\nAny thing except 'n' will be treated as 'y' \n");
        scanf(" %c", &option);
    } while (option != 'n');
}