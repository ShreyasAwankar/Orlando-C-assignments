/*
If the input is 6
Output patern:
1**********1
12********21
123******321
1234****4321
12345**54321
123456654321
*/

#include <stdio.h>
void main()
{
    int i, j, n, k;
    printf("Enter the number of lines you want to print\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("\n");
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        for (k = 1; k <= 2 * (n - i); k++)
        {
            printf("* ");
        }

        for (int x = i; x >= 1; x--)
        {
           printf("%d ", x);
        }
    }
}
