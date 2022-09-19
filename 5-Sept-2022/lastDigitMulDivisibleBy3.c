#include <stdio.h>
void main(){
    int a,b;
    printf("Enter two numbers \n");
    scanf("%d%d",&a,&b);
    a%=10;
    b%=10;
    if (a*b%3==0)
    printf("The multiplication of last digits of entered numbers is divisible by 3" );
    else
    printf("The multiplication of last digits of entered numbers is not divisible by 3");
}