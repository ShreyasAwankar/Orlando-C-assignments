//The program is valid for checking 3 digits numbers only.
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
    actual_mult=mult;
    while (mult > 0)
    {
        b = mult % 10;
        mult /= 10;
        b *= b * b;
        sum += b;
    }
    // It has been assumed that the multiplication as a three digit number.
    if (sum == actual_mult)
        printf("The multiplication of all the digits of the number entered an Armstrong number");
    else
        printf("The multiplication of all the digits of the number entered not an Armstrong number");
}