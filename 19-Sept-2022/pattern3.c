// Print the following pattern.
// 123456
// 23456
// 3456
// 456
// 56
// 6
#include <stdio.h>
void main()
{
    int i = 1, n, j, k = 1;
    printf("Enter the number\n");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("\n");
        j=i;
        // printf("\n");
        while (j <= n)
        {
            printf("%d", j);
            j++;
        }
        i++;
    }
}
