// Write a program to pass 2 complete 2 D array to a function and check they are equal or not. If equal then return 1 otherwise return 0 in calling function...
#include <stdio.h>
int ra, rb, ca, cb;
int equalChecker(int array1[ra][ca], int array2[rb][cb])
{
    for (int j = 0; j < ra; j++)
    {
        for (int k = 0; k < ca; k++)
        {
            if (array1[j][k] != array2[j][k])
            {
                return 0;
                break;
            }
            else
                return 1;
        }
    }
}
void main()
{
    printf("Enter the number of rows in your array1?\n");
    scanf("%d", &ra);
    printf("Enter the number of columns in your array2?\n");
    scanf("%d", &ca);
    printf("Enter the number of rows in your array1?\n");
    scanf("%d", &rb);
    printf("Enter the number of columns in your array2?\n");
    scanf("%d", &cb);
    int array1[ra][ca];
    int array2[rb][cb];
    if (ra == rb && ca == cb)
    {
        printf("\nEnter the elements of the array1\n");
        for (int j = 0; j < ra; j++)
        {
            for (int k = 0; k < ca; k++)
            {
                printf("array1[%d][%d]=?\n", j, k);
                scanf("%d", &array1[j][k]);
            }
        }
        printf("\nEnter the elements of the array2\n");
        for (int j = 0; j < rb; j++)
        {
            for (int k = 0; k < cb; k++)
            {
                printf("array2[%d][%d]=?\n", j, k);
                scanf("%d", &array2[j][k]);
            }
        }

        if (equalChecker(array1, array2) == 1)
            printf("Both the arrays are equal.");
        else
            printf("Two entered matrices are not equal as their elements are not equal.");
    }

    else
        printf("Two entered matrices are not equal since their sizes are not same.");
}
