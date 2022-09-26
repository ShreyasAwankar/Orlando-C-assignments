// Write a program to read a number from user and check how many times that element occured in 2D array.
#include <stdio.h>
void main()
{
    int a[3][4];
    printf("Enter the array elements.\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("a[%d][%d]= ?\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    int k, counter = 0;
    printf("\nEnter the element you want to search.\n");
    scanf("%d", &k);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (a[i][j] == k)
                counter++;
        }
    }
    printf("Entered element %d occured for %d times.", k, counter);
}