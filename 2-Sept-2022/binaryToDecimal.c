#include <stdio.h>
void main(){
    int a,b,c,d,e,sum;
    printf("Enter a three digit binary number\n");
    scanf("%d",&a);
    b= a % 10;
    c= (b==1)?1:0;
    a/=10;
    b=a%10;
    d = (b==1)?2:0;
    a/=10;
    b=a%10;
    e = (b==1)?4:0;
    sum = c+d+e;
    printf("The binary to decimal is: %d", sum);
}