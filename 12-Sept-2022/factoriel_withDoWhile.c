#include <stdio.h>

void main()
{
    int a,b=1;
    printf("Enter Your number\n");
    scanf("%d",&a);

    do
    {
       b *= a;
       a--;
    }while (a!=0);
    printf("The factoriel of the entered number is %d",b);

}