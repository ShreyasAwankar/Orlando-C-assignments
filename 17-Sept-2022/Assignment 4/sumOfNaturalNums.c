#include <stdio.h>
void main()
{
    int a, sum = 0;
    printf("Enter your number\n");
    scanf("%d", &a);
    while (a > 0)
    {
        sum += a;
        a--;
    }
    printf("The sum of all the natuaral numbrs upto %d is %d", a, sum);
}