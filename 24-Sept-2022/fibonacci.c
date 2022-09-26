// Write a program to print the fibonacci series upto a given number.
#include <stdio.h>
void main()
{
    int n;
    printf("Enter a number upto which you wish to print the fibonacci series\n");
    scanf("%d", &n);
    int a = 0, b = 1, i = 1, j, k;
    k = 3;
    printf("%d %d %d ", a, b, i);
    // 1 1 2 3 5 8 13
    while (k < n)
    {
        j = b + i;
        b = i;
        i = j;
        printf("%d ", j);
        k++;
    }
}