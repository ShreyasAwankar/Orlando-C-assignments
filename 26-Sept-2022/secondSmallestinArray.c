// Write a program to find the second smallest element in an array.

#include <stdio.h>
void main()
{
    int e, i;
    printf("How many elements you want in your array?\n");
    scanf("%d", &e);
    int array[e];
    printf("Enter the array elements\n");
    for (i = 0; i < e; i++)
    {
        printf("array[%d] = ?\n", i);
        scanf("%d", &array[i]);
    }
    int min1 = array[0];
    for (i = 1; i < e; i++)
    {
        if (array[i] < min1)
        {
            min1 = array[i];
        }
    }
    // printf("%d ", min1);
    int min2 = 2147483647;
    for (i = 2; i < e; i++)
    {
        if (array[i] < min2 && array[i] > min1)
        {
            min2 = array[i];
        }
    }
    printf("The second smallest element in your array is %d ", min2);
}