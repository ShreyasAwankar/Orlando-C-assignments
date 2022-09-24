// Write a program to convert a decimal into binary with an array.
#include <stdio.h>
void main()
{
    int a, array_size = 0;
    printf("Enter a decimal number\n");
    scanf("%d", &a);
    int b = a, c;
    while (b > 0)
    {
        b /= 2;
        array_size++;
    }
    printf("%d\n", array_size);
    int array[array_size - 1];
    for (int i = array_size - 1; i >= 0; i--)
    {
        array[i] = a % 2;
        // printf("%d ", array[i]);
        a /= 2;
    }
    printf("\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\nSize of array %d", sizeof(array));
}