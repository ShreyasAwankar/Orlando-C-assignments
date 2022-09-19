// Write program to read a number from user and finf the factoriel of that number. Print all the digits between first and second digit of that factoriel in ascending order if the first digit is lesser than the first digit other wise print in ascending order.

#include <stdio.h>
void main()
{
    int a, fact = 1, firstDigit, secondDigit;
    printf("Enter Your number\n");
    scanf("%d", &a);
    while (a != 0)
    {
        fact *= a;
        a--;
    }
    printf("The factoriel of the entered number is %d\n", fact);
    while (fact >= 100)
    {
        fact = fact / 10;
    }

    firstDigit = fact / 10;
    secondDigit = fact % 10;

    if (firstDigit <= secondDigit)
    {
        while (firstDigit <= secondDigit)
        {
            printf("%d \t", firstDigit);
            firstDigit++;
        }
    }
    else
    {
        while (firstDigit >= secondDigit)
        {
            printf("%d \t", firstDigit);
            firstDigit--;
        }
    }
}