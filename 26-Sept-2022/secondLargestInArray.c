// Write a program to find the second largest element in an array.

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
    int max1 = array[0];
    for (i = 0; i < e; i++)
    {
        if (array[i] > max1)
        {
            max1 = array[i];
        }
    }
    printf("%d ", max1);
    int max2 = 2147483648;
    for (i = 0; i < e; i++)
    {
        if (array[i] >= max2 && array[i] < max1)
        // if (array[i] >= max2 )
        {
            max2 = array[i];
        }
    }
    printf("The second largest element in your array is %d ", max2);
}