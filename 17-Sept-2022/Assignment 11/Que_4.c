// Write a program to take two numbers from the user and and print factoriel of all the numbers between these two numbers.
#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter your numbers\n");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        while (a >= b)
        {
            int c = b, fact = 1;
            while (c > 0)
            {
                fact *= c;
                c--;
            }
            printf("The factoriel of the %d is %d\n", b, fact);
            b++;
        }
    }
    else
    {
        while (a <= b)
        {
            int c = a, fact=1;
            while (c > 0)
            {
                fact *= c;
                c--;
            }
            printf("The factoriel of the %d is %d\n", a, fact);
            a++;
        }
    }
}
