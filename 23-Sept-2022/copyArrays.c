// Write a program in C to copy the elements of one array into another array

#include <stdio.h>
void main()
{
    int array1[10], array2[10];
    printf("Enter array elements\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array1[i]);
    }
    printf("The first array elements are \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array1[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        array2[i] = array1[i];
    }
    printf("\nCoppied array elements are \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array2[i]);
    }
    for (int i = 0, j = 9; i<10, j>=0; i++, j--)
    {
        array2[i] = array1[j];
    }
    printf("\nReversed coppied array elements are \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array2[i]);
    }
}