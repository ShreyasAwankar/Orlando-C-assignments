// Write a program in C to count the digits of a given number using recursion.
#include <stdio.h>
int counter(int x){
    if (x==0)
    return 0;
    else
    return 1 + counter(x/10);
}
void main()
{
    int a,b, count;
    printf("Enter your number\n");
    scanf("%d", &a);
    count = counter(a);
    printf("The number contains %d digits",count);
}