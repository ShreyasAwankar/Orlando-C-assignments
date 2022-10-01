// Write a program in C to count the digit in a given number using recursion.
#include <stdio.h>
int counter(int x, int y){
    int c = x%10;
    if (x==0)
    return 0;
    else if (c == y)
    return 1+counter(x/10,y);
    else
    return counter(x/10,y);
}
void main()
{
    int a,b, count;
    printf("Enter your number\n");
    scanf("%d", &a);
    printf("Enter your digit\n");
    scanf("%d", &b);
    count = counter(a,b);
    printf("The digit occured %d times",count);
}