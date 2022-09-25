// Write a program in C for a 2D array of size 3X4 and print the matrix.
#include <stdio.h>
void main(){
    int a[3][4];
    printf("Enter the array elements.\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0 ; j < 4; j++)
        {
            printf("a%d%d= ?\n",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0 ; j < 4; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
}