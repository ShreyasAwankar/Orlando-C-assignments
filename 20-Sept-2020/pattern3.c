/* Print the pattern..
1
23
456
78910
*/

#include <stdio.h>
void main()
{
    int i, j, n, k = 1;
    printf("Enter the number of lines you wanna print\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("\n");

        for (j = 1; j <= i; j++)
        {
            printf("%d ", k);
            k++;
        }
    }
}
