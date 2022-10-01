// Write a program to pass complete 2D array to a function and cube every element of 2D array and display in calling and called function.

#include <stdio.h>
int r, c;
void cube(int array[r][c])
{
    printf("\nArray elements in called functions are\n");
    for (int j = 0; j < r; j++)
    {
        for (int k = 0; k < c; k++)
        {
            array[j][k] *= array[j][k] * array[j][k];
            printf("%d ", array[j][k]);
        }
    }
}

#include <stdio.h>
void main()
{
    printf("Enter the number of rows in your array?\n");
    scanf("%d", &r);
    printf("Enter the number of columns in your array?\n");
    scanf("%d", &c);
    int array[r][c];
    for (int j = 0; j < r; j++)
    {
        for (int k = 0; k < c; k++)
        {
            printf("array[%d][%d]=?\n",j,k);
            scanf("%d", &array[j][k]);
        }
    }

    cube(array);
    printf("\nThe array elements in calling function are\n");
    for (int j = 0; j < r; j++)
    {
        for (int k = 0; k < c; k++)
        {
            printf("%d ", array[j][k]);
        }
    }
}
