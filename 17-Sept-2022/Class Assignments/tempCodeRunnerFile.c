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