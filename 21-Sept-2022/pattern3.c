/* Print the following pattern.
1
01
101
0101
10101
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
        for (j = 1; j <= i; j++)
        {

            if (j % 2 == 1)
                printf("1 ");
            else
                printf("0 ");
        }

        i++;
    }
}