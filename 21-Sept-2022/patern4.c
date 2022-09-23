/* Print the following pattern.
 *
 * *
 * * *
 * * * *
 * * *
 * *
 *
 */
#include <stdio.h>
void main()
{
    int i = 1, n, j, k, x, o = 1;
    printf("How many lines you want to print?\n");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("\n");
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("* ");
        }
        i++;
    }
    x = i - 1;
    while (o <= x)
    {
        for (int z = 1; z <= x - i; z++)
        {
            printf(" ");
        }
        for (int p = 1; p <= x; p++)
        {
            printf("* ");
        }
    }
}
