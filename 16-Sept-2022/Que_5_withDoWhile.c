#include <stdio.h>
void main(){
    int a,b,sqr,sum=0;
    printf("Enter your number\n");
    scanf("%d",&a);
    do{
        b= a%10;
        a/=10;
        sqr=b*b;
        sum+=sqr;
    }while(a>0);
    printf("The sum of squares of all the digits of the entered number is %d",sum);
}