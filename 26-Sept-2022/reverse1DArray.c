// Write a program to reverse a 1D array.

#include <stdio.h>
void main()
{
    int e, i, j;
    printf("How many elements you want in your array?\n");
    scanf("%d", &e);
    int array[e];
    int reversed_array[e];
    printf("Enter the array elements\n");
    for (i = 0 ; i < e; i++)
    {   
        printf("array[%d] = ?\n",i);
        scanf("%d", &array[i]);
    }
    // Reversing the array.
    for (i = e-1, j = 0; i >= 0, j <= e-1; i--, j++)
    {
        reversed_array[j] = array[i];
    }
    // Printing the reversed array.
    printf("The reversed array elements are\n");
    for (i = 0 ; i < e; i++)
    {
        printf("%d  ", reversed_array[i]);
    }

}