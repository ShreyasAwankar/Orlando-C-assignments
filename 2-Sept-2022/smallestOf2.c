#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter a & b \n");
    scanf("%d%d", &a, &b);
    int smallest = (a < b) ? a : b;
    printf("The smallest numer is %d", smallest);
}