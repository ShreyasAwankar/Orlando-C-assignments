//WAP to display mirror image of a matrix
#include<stdio.h>
#define ROWS 3
#define COLS 3
void main()
{
    int i, j;
    int a[ROWS][COLS];
    for(i=0;i<ROWS;i++)
    {
        for(j=0;j<COLS;j++){
        printf("a[%d][%d]=?\n",i,j);
        scanf("%d",&a[i][j]);
        }
    }
    printf("Origional Matrix:\n");
    for(i=0;i<ROWS;i++)
    {
        printf("\n");
        for(j=0;j<COLS;j++)
        {
            printf("%d\t",a[i][j]);
        }
    
    }
    printf("\n\nMirror Image of Matrix:\n");
    for(i=0;i<ROWS;i++)
    {
        printf("\n");
        for(j=COLS-1;j>=0;j--)
        {
            printf("%d\t",a[i][j]);
        }
    
    }
}