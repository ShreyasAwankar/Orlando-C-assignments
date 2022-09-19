#include <stdio.h>

void main()
{
    int a = 0;
    do
    {
        if (a % 2 == 0)
        {
            printf("%d \t", a);
        }
        a++;
    }while (a <= 100);
}