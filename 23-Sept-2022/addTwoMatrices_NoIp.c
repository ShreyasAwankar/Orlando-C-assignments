// Write a program in C to add the elements of two same size matrices.
#include <stdio.h>
void main(){
    int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int b[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int sum[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0 ; j < 4; j++)
        {
            sum[i][j] = a[i][j] + a[i][j];
        }
        printf("\n");
    }
    printf("The sum matrix of the added elements is\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0 ; j < 4; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    
}