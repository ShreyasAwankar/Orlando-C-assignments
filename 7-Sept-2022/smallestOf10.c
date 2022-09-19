#include <stdio.h>
void main()
{
    int a, b, c, d, e, f, g, h, i, j;
    printf("Enter 10 numbers\n");
    scanf("%d%d%d%d%d%d%d%d%d%d",&a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
    
    if (a < b && a < c && a < d && a < e && a < f && a < g && a < h && a < i && a < j)
        printf("a is the smallest");
    else if (b < c && b < d && b < e && b < f && b < g && b < h && b < i && b < j)
        printf("b is the smallest");
    else if (c < d && c < e && c < f && c < g && c < h && c < i && c < j)
        printf("c is the smallest");
    else if (d < e && d < f && d < g && d < h && d < i && d < j)
        printf("d is the smallest");
    else if (e < f && e < g && e < h && e < i && e < j)
        printf("e is the smallest");
    else if (f < g && f < h && f < i && f < j)
        printf("f is the smallest");
    else if (g < h && g < i && g < j)
        printf("g is the smallest");
    else if (h < i && h < j)
        printf("h is the smallest");
    else
        printf("f is the smallest");
}