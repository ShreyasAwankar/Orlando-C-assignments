// WAP for power function using recursion..
#include <stdio.h>
int power(int a, int b)
{
    if (b == 0)
        return 1;
    else
        return a * power(a,b - 1);
}
void main()
{
    int a, b, pow;
    printf("Enter a number to make power of\n");
    scanf("%d", &a);
    printf("Enter the value which you want to power the number by\n");
    scanf("%d", &b);
    pow = power(a,b);
    printf("The power of %d by %d is %d", a, b, pow);
}