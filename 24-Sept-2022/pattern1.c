/* Print the pettern
If input = 6, output should be
*****6
****656
***654654
**65436543
*6543265432
654321654321
*/

#include <stdio.h>
void main()
{
    int n;
    printf("Enter the number of lines you want to print\n");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        printf("\n");
        for (int j = 1; j <= i - 1; j++)
        {
            printf("* ");
        }

        for (int k = n; k >= i; k--)
        {
            printf("%d ", k);
        }

        for (int l = i; l < n;)
        {
            printf("%d ", ++l);
        }
    }
}