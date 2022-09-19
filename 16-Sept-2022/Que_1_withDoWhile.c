#include <stdio.h>
void main(){
    int a,b,mult=1;
    printf("Enter your number\n");
    scanf("%d",&a);
    do{
        b = a%10;
        a/=10;
        mult *= b;
    }while (a>0);
    printf("The multiplication of all the digits of the number provided is %d ",mult);
}