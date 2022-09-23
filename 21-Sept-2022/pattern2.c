/* Print the following pattern.
    1
   2 2
  3 3 3
4 4 4 4 4
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
        k = 1;
        for (k = 1; k <= i; k++)
        {
            printf("%d ", i);
        }
        i++;
    }
}