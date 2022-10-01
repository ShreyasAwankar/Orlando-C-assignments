// Write a program to pass the elements of an array to a function and check how many numbers are prime.
#include <stdio.h>
int prime(int a)
{
    for (int i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
            return 0;
    }
    return 1;
}

void main()
{
    int a, count = 0;
    printf("How many array elements do you want?\n");
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        printf("a[%d]=? \n", i);
        scanf("%d", &arr[i]);
        if (prime(arr[i]) == 1)
            count++;
    }
    printf("There are %d prime elements in your array", count);
}