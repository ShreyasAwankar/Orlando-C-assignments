#include <stdio.h>
void main()
{
    int a = 100;
    int b, sum = 0, count = 0;
    while (a > 0)
    {
        count++;
        a /= 10;
    }
    printf("%d ", count);
}