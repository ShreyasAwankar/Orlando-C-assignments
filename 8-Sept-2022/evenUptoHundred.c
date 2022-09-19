#include <stdio.h>

void main()
{
    int a = 0;
    while (a <= 100)
    {
        if (a % 2 == 0)
        {
            printf("%d \t", a);
        }
        a++;
    }
}