/* Print the pattern..
if the input is 5
1
**
123
****
12345
******
*/

#include <stdio.h>
void main()
{
    int i, j, n;
    printf("Enter the number of lines you want to print\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("\n");
        if (i % 2 == 1)
        {
            for (j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
        }
        else
        {
            for (j = 1; j <= i; j++)
            {
                printf("* ");
            }
        }
    }
}
