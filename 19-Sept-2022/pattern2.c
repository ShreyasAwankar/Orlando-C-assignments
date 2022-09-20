// Print the following patern.
// 54321
// 5432
// 543
// 54
// 5

#include <stdio.h>
void main()
{
    int i = 1, n, j;
    printf("Enter the number\n");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("\n");
        j=n;
        while (j>=i){
            printf("%d",j);
            j--;
        }
        i++;
    }
}