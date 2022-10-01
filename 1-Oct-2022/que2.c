// Write a program to pass every element of 2D array to a function and five count of even and odd numbers.
#include <stdio.h>
void checker(int x, int *c1, int *c2)
{
    // c1 = 0, c2 = 0;
    if (x % 2 == 0)
        c1++;
    else
        c2++;
}

void main()
{
    int r, c;
    static int count1 = 0, count2 = 0;
    printf("Enter the number of rows in your array?\n");
    scanf("%d", &r);
    printf("Enter the number of columns in your array?\n");
    scanf("%d", &c);
    int array[r][c];
    for (int j = 0; j < r; j++)
    {
        for (int k = 0; k < c; k++)
        {
            printf("Array[%d][%d]?\n", j, k);
            scanf("%d", &array[j][k]);
            checker(array[j][k], &count1, &count2);
        }
    }
    printf("The even elements are %d \n", count1);
    printf("The even elements are %d \n", count2);
}