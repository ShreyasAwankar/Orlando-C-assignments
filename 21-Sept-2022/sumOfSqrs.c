#include <stdio.h>
void main()
{
    int n, sum = 0, square;
    printf("Enter your number\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        square = i * i;
        sum += square;
        printf("%d\t", square);
    }
    printf("\nThe sum of square of all natural numbers upto %d is %d", n, sum);
}