#include <stdio.h>
void main()
{
    int a, b, c, d, e;
    printf("Enter four numbers\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a < b)
    {
        if (a < c) // a is greater than b & c.
            e = a;
        else // c is greater than a & b.
            e = c;
    }
    else
    {
        if (b < c) // b is greater than a & c.
            e = b;
        else // c is greater than a & b.
            e = c;
    }
    d < e ? e = d : e;
    printf("The smallest of entered numbers is: %d", e);
}