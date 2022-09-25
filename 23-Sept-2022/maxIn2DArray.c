// Write a program to find the maximum element in a 2D array.
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
    printf("\n");
    int max = a[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0 ; j < 4; j++)
        {
            if (a[i][j]>max)
            max = a[i][j];
        }
    }
    printf("The maximum element of the array is. %d", max);
}