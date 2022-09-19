#include <stdio.h>

void main()
{
    int a,b=1;
    printf("Enter Your number\n");
    scanf("%d",&a);

    while (a!=0)
    {
       b *= a;
       a--;
    }
    printf("The factoriel of the entered number is %d",b);

}