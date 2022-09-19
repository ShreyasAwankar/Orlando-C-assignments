#include <stdio.h>
void main()
{
    int a, b, choice;
    printf("Enter two 2-digit numbers\n"); // The digits are fixed so as to tackle choice 40 & 60 without loop...
    scanf("%d%d", &a, &b);
    printf("Enter your choice\n");
    scanf("%d", &choice);
    
    if (choice == 10)
        printf("The addition of entered numbers is: %d", a + b);
    else if (choice == 20)
        printf("The multiplication of entered numbers is: %d", a * b);
    else if (choice == 30)
        printf("The sum of square of entered numbers is: %d", a * a + b * b);
    else if (choice == 40)
    {
        int x, y, p, q;
        x = a % 10;
        x *= x;
        y = a / 10;
        y *= y;
        p = a % 10;
        p *= p;
        q = a / 10;
        q *= q;
        printf("The sum of square of every digit of the numbers entered is: %d", p + q + x + y);
    }
    else if (choice == 50)
        printf("The substraction of last digits of the numbers entered is: %d", a % 10 - b % 10);
    else if (choice == 60)
    {
        int x, y, p, q;
        x = a / 10;
        x *= x * x;
        // printf("%d\n", x);

        y = a % 10;
        if (y <= 0)
        {
            y *= -1;
        }
        y *= y * y;
        // printf("%d\n", y);

        p = b / 10;
        p *= p * p;
        printf("%d\n", p);

        q = b % 10;
        if (q <= 0)
        {
            q *= -1;
        }
        q *= q * q;
        // printf("%d\n", q);

        printf("The sum of cube of every digit of the numbers entered is: %d", p + q + x + y);
    }
    else
    {
        printf("Wrong choice");
    }
}