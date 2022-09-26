/* Print the pettern
If input = 6, output should be
12345654321
*123454321
**1234321
***12321
****121
*****1
*/
#include <stdio.h>
void main()
{
    int n, i, j;
    printf("How many lines you want to print\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = n; j > n - i + 1; j--)
        {
            printf("*");
        }
        for (j = 1; j <= n - i; j++)
        {
            printf("%d",j);
        }
        for (j=n-i+1;j>=1;j--)
        {
            printf("%d",j);
        }
        
        printf("\n");
    }
}
