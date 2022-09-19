#include <stdio.h>

void main()
{
    int a, b=1, sum = 0, secondlastDigit, lastDigit;
    printf("Enter your number\n");
    scanf("%d", &a);
    while (a != 0)
    {
        b = a * a * a;
        sum += b;
        a--;
    }
    printf("The sum of cube of all the numbers is %d \n", sum);
}