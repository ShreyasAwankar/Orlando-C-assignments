/* Print the pattern..
1
1 *
1 * 3
1 * 3 *
*/

#include <stdio.h>
void main()
{
    int i, j, n, k ;
    printf("Enter the number of lines you wanna print\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("\n");
        
        for (j=1; j <= i; j++)
        {
            if (j % 2 == 1)
            {
                printf("%d ", j);
            }
            else{
                printf("* ");
            }
        }
    }
}
