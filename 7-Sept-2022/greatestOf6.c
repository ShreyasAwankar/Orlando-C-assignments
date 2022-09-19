#include <stdio.h>
void main()
{
    float a, b, c, d, e, f;
    printf("Enter six numbers \n");
    scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);

    if (a > b && a > c && a > d && a > e && a > f)
    {
        printf("a is greater");
    }
    else if (b > c && b > d && b > e && b > f)
    {
        printf("b is greater");
    }
    else if (c > d && c > e && c > f)
    {
        printf("c is greater");
    }
    else if (d > e && c > f)
    {
        printf("d is greater");
    }
    else if (e > f)
    {
        printf("e is greater");
    }
    else
    {
        printf("f is greater");
    }
}