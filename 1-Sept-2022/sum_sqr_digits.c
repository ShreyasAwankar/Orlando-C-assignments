#include <stdio.h>
void main(){
    int a,b,c,d,e;
    printf("Enter three number: \n");
    scanf("%d", &a);
    b=a%10;
    a/=10;
    c=a%10;
    a/=10;
    d=a%10;
    e = d*d + b*b + c*c;
    printf("The sum of the squares is: %d", e);
}