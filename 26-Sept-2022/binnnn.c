// Write a program to convert a binary number into a decimal number.
#include <stdio.h>
void main(){
    int a,i,j,sum=0;
    printf("Enter your binary number\n");
    scanf("%d",&a);
    for (a, i=1; a>0; a/=10,i+=i ){
        if(a%10==1)
        sum+=i;
    }
    printf("The decimal of the entered binary number is %d\n", sum);
}