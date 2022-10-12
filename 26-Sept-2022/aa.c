// Write a program to find the second largest element in an array.

#include <stdio.h>
void main()
{
    int e, i;
    printf("How many elements you want in your array?\n");
    scanf("%d", &e);
    int array[e];
    int array2[e];
    printf("Enter the array elements\n");
    for (i = 0; i < e; i++)
    {
        printf("array[%d] = ?\n", i);
        scanf("%d", &array[i]);
    }
    int max1 = array[0];
    // int max2 = 0;
    for (i = 1; i < e; i++)
    {
        if (array[i] > max1)
        {
            array2[i] = array[i];
            // array[i] = array[i + 1];
        }
        else
        array2[i] = array[i];
    }
    // for (i = 0; i < e; i++)
    // {
    //     if (array[i] > max2 && array[i] < max1)
    //     {
    //         max2 = array[i];
    //     }
    // }
    printf("The second largest element in your array is %d ", array2[e-1]);
}