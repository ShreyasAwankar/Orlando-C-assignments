#include <stdio.h>
void main()
{
    int mult = 1, a, b;
    printf("Enter your number: ");
    scanf("%d", &a);
    while (a != 0)
    {
        b = a % 10;
        a = a / 10;
        mult *= b * b * b;
    }
    printf("The multiplication of cubes of the digits of the number you entered is: %d", mult);
}