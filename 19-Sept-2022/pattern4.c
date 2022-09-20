// Print the foloowing pattern.
// 54321
// 4321
// 321
// 21
// 1

#include <stdio.h>
void main()
{
    int i, n, j,k;
    printf("Enter the number\n");
    scanf("%d", &n);
    i=n;
    while (i >= 1)
    {
        printf("\n");
        j=i;
        while (j >= 1)
        {
            printf("%d", j);
            j--;
        }

        i--;
    }
}