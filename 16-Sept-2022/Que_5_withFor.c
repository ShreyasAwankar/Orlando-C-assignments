#include <stdio.h>
void main(){
    int a,b,sqr,sum=0;
    printf("Enter your number\n");
    scanf("%d",&a);
    for(a;a>0;a/=10){
        b= a%10;
        sqr=b*b;
        sum+=sqr;
    }
    printf("The sum of squares of all the digits of the entered number is %d",sum);
}