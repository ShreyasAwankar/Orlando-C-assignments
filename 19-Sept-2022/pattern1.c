// Print the foloowing pattern.
// 1
// 12
// 123
// 1234

#include <stdio.h>
void main()
{
    int i = 1, n, j;
    printf("Enter the number\n");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("\n");
        j = 1;
        while (j <= i)
        {
            printf("%d", j);
            j++;
        }

        i++;
    }
}