// Write a program to read 10 elements in an array and find wheather the sum of the maximum and minimum element of that array is prime or not.
#include <stdio.h>
void main()
{
    int array[10], i;
    printf("Enter array elements\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }
    int min = array[0];
    int max = array[0];
    for (i = 1; i < 10; i++)
    {
        if (array[i] < min)
            min = array[i];
    }
    for (i = 1; i < 10; i++)
    {
        if (array[i] > max)
            max = array[i];
    }
    int sum = min + max;
    int primechecker = 1;
    for (i = 2; i <= sum / 2; i++)
    {
        if (sum % i == 0)
            primechecker = 0;
    }
    if(primechecker==1)
    printf("The sum of maximum element i.e. %d and minimum element i.e. %d of an entered array is prime",max, min);
    else
    printf("The sum of maximum element i.e. %d and minimum element i.e. %d of an entered array is not prime",max, min);
}