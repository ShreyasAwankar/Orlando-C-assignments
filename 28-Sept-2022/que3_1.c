/* Write a program to pass an entire array in a function and square every element at that array in called function and display that array in both the functions. */
#include <stdio.h>
void squar(int array[], int a)
{
    printf("\nArray elements in called functions are\n");
    for (int i = 0; i < a; i++)
    {
        array[i] *= array[i];
        printf("%d ", array[i]);
    }
}

#include <stdio.h>
void main()
{
    int a;
    printf("How many elements you want in your array?\n");
    scanf("%d",&a);
    int array[a];
    for (int i = 0; i < a; i++)
    {
        printf("array[%d] = ?\n", i);
        scanf("%d", &array[i]);
    }
    squar(array, a);
    printf("\nThe array elements in calling function are\n");
    for (int i = 0; i < a; i++)
    {
        printf("%d ", array[i]);
    }
}