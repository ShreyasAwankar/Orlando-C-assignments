// Write a program to find the minimum element in a 2D array.
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
    int min = a[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0 ; j < 4; j++)
        {
            if (a[i][j]<min)
            min = a[i][j];
        }
    }
    printf("The minimum element of the array is. %d", min);

}