
#include <stdio.h>
void main()
{
    int a, b, c, d;
    printf("Enter your numbers \n");
    scanf("%d%d%d", &a, &b, &c);
    d = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("The greatest numer is %d", d);
}