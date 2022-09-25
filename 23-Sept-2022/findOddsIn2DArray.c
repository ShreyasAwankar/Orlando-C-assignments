// Write a program to find the odd elements in a 2D array.
#include <stdio.h>
void main(){
    int a[3][4];
    printf("Enter the array elements.\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0 ; j < 4; j++)
        {
            printf("a[%d][%d]= ?\n",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nThe odd elements in the array are\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0 ; j < 4; j++)
        {
            if (a[i][j]%2==1)
            printf("%d ",a[i][j]);
        }
    }
}