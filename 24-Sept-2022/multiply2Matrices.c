// Write a program to multiply two matrices.
#include <stdio.h>
void main()
{
    int a[2][2];
    int b[2][2];
    int mult[2][2];
    printf("Enter the elements of the first matrix\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("a[%d][%d]\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of the second matrix\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("b[%d][%d]\n", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            mult[i][j] = 0;
            for (int z = 0; z < 2; z++)
            {
                mult[i][j] += a[i][z] * b[z][j];
            }
        }
    }
    printf("\nThe multiplication matrix is\n");
    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            printf("%d ",mult[i][j]);
        }
        printf("\n");
    }
}
