#include <stdio.h>
void main (){
    int x;
    int a = 10;
    int b = 20;
    int c = 30;

    x = printf("\n%d %d %d",a,b,scanf("%d%d%d",&a,&b,&c));
    int y = printf("\n%d %d %d ",scanf("%d%d%d",&a,&b,&c),a,b);
    int z = printf("\n%d %d %d ",a,scanf("%d%d%d",&a,&b,&c),b);
    printf("\nx=%d", x);
    printf("\ny=%d", y);
    printf("\nz=%d", z);
}