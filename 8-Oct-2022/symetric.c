// WAP to check the matrix is symmetric or not
#include <stdio.h>
#define ROWS 3
#define COLS 3
void main()
{
    int i, j, checker=1;
    int array[ROWS][COLS];
    int transpose[ROWS][COLS];
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("array[%d][%d]=?\n", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            transpose[j][i] = array[i][j];
        }
    }

    printf("The transpose matrix is\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            if(array[i][j] != transpose[i][j]){
            checker=0;
            break;  
            }                                                                  
        }
    }
    if(checker==1)
    printf("The entered matrix is  a symetric matrix.");
    else
    printf("The enetered matrix is not a symetric matrix.");
}