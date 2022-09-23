/*
 */

#include <stdio.h>
void main()
{
    int i = 1, n, j, k;
    printf("How many lines you want to print?\n");
    scanf("%d", &n);
    while (i <= n / 2)
    {
        printf("\n");
        {

            for (j = 1; j <= n / 2 - i; j++)
            {
                printf(" ");
            }

            for (k = 1; k <= 2 * i - 1; k++)
            {
                printf("*");
            }
        }

        i++;
    }
    // printf("%d", i);
    i = 1;
    int q = n / 2;
    while (i <= q)
    {
        printf("\n");
        for (j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (k = q; k >= 1; k--)
        {
            printf("*");
        }
        // for (i=1; i<=n/2; i++){
    }
    i++;
}