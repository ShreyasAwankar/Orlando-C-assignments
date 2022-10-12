// Write a program in C to accept two matrices and check wheather they are equal.
#include <stdio.h>
void main()
{
    int ra, rb, ca, cb;
    int i, j;
    int a[ra][ca];
    int b[rb][cb];
    int valueChecker = 1;
    printf("Enter how many rows you want in first matrix\n");
    scanf("%d", &ra);
    printf("Enter how many columns you want in first matrix\n");
    scanf("%d", &ca);
    printf("Enter how many rows you want in second matrix\n");
    scanf("%d", &rb);
    printf("Enter how many columns you want in second matrix\n");
    scanf("%d", &cb);

    if (ra == rb && ca == cb)
    {
        printf("Enter the element of the first matrix.\n");
        for (i = 0; i < ra; i++)
        {
            for (j = 0; j < ca; j++)
            {
                printf("a[%d][%d] = ?\n", i, j);
                scanf("%d", &a[i][j]);
            }
        }
        printf("\nEnter the elements of the second matrix.\n");
        for (i = 0; i < rb; i++)
        {
            for (j = 0; j < cb; j++)
            {
                printf("b[%d][%d] = ?\n", i, j);
                scanf("%d", &b[i][j]);
            }
        }
        for (i = 0; i < rb; i++)
        {
            for (j = 0; j < cb; j++)
            {
                if (a[i][j] != b[i][j])
                    valueChecker = 0;
            }
        }
        if (valueChecker == 1)
            printf("Two entered matrices are equal.");
        else
            printf("Two entered matrices are not equal as their elements are not equal");
    }
    else
        printf("Two entered matrices are not equal since their sizes are not same.");
}