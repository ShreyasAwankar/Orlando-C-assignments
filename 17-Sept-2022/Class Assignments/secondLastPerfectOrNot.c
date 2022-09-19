// Write a program to check wheather the second last digit of the number entered is prfect or not.
#include <stdio.h>
void main()
{
    int a, i = 1, sum = 0;
    printf("Enter your number\n", &a);
    scanf("%d", &a);
    // a=a;
    a%=100;
    a/=10;
    while (i < a-1)
    {
        if (a % i == 0)
        {
            sum += i;
        }
        i++;
    }
    if (sum == a)
        printf("The second last digit of the entered number is a perfect number.");
    else
        printf("The second last digit of the entered number is not a perfect number.");
}