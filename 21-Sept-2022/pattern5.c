/*
Print the following pattern.
    *
   * *
  * * *
* * * * *
*/
#include <stdio.h>
void main()
{
    int i = 1, n, j, k;
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
}