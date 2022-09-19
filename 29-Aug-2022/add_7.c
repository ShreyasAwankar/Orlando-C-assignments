#include <stdio.h>
void main(){
    int a, b, c, d, e, f, g, sum;
    printf("Enter your 7 numbers\n");
    scanf("%d %d %d %d %d %d %d", &a,&b,&c,&d,&e,&f,&g);
    sum = a+b+c+d+e+f+g;
    printf("The addition of 7 numbers is %d", sum);
}