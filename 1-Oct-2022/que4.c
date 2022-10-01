// Write a program to pass 2 complete 2 D array to a function and check they are equal or not. If equal then return 1 otherwise return 0 in calling function...
#include<stdio.h>
int r, c;
int equalChecker(int array1[2][2], int array2[2][2])
{
    for (int j = 0; j < r; j++)
    {
        for (int k = 0; k < c; k++)
        {
            if(array1[j][k]==array2[j][k])
            return 1;
            else 
            return 0;
        }
    }
}
void main()
{
    printf("Enter the number of rows in your array?\n");
    scanf("%d", &r);
    printf("Enter the number of columns in your array?\n");
    scanf("%d", &c);
    int array1[r][c];
    int array2[r][c];
    for (int j = 0; j < r; j++)
    {
        for (int k = 0; k < c; k++)
        {
            printf("array1[%d][%d]=?\n", j, k);
            scanf("%d", &array1[j][k]);
        }
    }
    printf("\n");
    for (int j = 0; j < r; j++)
    {
        for (int k = 0; k < c; k++)
        {
            printf("array2[%d][%d]=?\n", j, k);
            scanf("%d", &array2[j][k]);
        }
    }
    if(equalChecker(array1,array2)==1)
    printf("Both the arrays are equal");
    else
    printf("Both the arrays are not equal");
}
