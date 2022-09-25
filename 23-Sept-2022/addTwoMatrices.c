// Write a program in C to add the elements of two same size matrices.
#include <stdio.h>
void main()
{
    int a[3][4];
    int b[3][4];
    printf("Enter the elements of the first matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("a[%d][%d]\n",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the elements of the second matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("a[%d][%d]\n",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    int sum[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum[i][j] = a[i][j] + a[i][j];
        }
        printf("\n");
    }
    printf("\nThe sum matrix after adding two matrices is\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}