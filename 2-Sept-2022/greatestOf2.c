#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter a & b \n");
    scanf("%d%d", &a, &b);
    int greatest = (a > b) ? a : b;
    printf("The greatest numer is %d", greatest);
}