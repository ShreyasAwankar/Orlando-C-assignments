#include <stdio.h>
int main(){
    int a, b, c, d, e, mult;
    printf("Enter five numbers\n");
    scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
    mult = a*b*c*d*e;
    printf("The multiplication of 5 numbers is %d", mult);
    return 0;
}