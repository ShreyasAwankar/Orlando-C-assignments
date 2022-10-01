// Write a program to pass only even index elements of an array to a function.
#include <stdio.h>
void evenPrinter(int a, int i)
{
    printf("\narray [%d] = %d \n", i, a);
}

void main()
{
    int a, i;
    printf("How many elements you want in your array?\n");
    scanf("%d", &a);
    int array[a];
    for (i = 0; i < a; i++)
    {
        printf("array[%d] = ?\n", i);
        scanf("%d", &array[i]);
    }
    for (i = 0; i < a; i++)
    {
        if (i % 2 == 0)
            evenPrinter(array[i], i);
    }
}
