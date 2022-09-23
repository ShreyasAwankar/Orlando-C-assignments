/* Print the following pattern.
 *
 * * 
 * * * 
 * * * * 
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
            k = 1;
            for (k; k <= i; k++)
            {
                printf("* ");
            }
        i++;
    }
}