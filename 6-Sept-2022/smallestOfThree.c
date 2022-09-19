#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter three numbers\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a < b)
    {
        if (a < c) // a is smaller than b & c.
            printf("The smallest number is %d", a);
        else // c is smaller than a & b.
            printf("The smallest number is %d", c);
    }
    else
    {
        if (b < c) // b is smaller than a & c.
            printf("The smallest number is %d", b);
        else // c is smaller than a & b.
            printf("The smallest number is %d", c);
    }
}