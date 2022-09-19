#include <stdio.h>
void main(){
    int a,b,mult=1;
    printf("Enter your number\n");
    scanf("%d",&a);
    for (a;a>0;a/=10){
        b = a%10;
        mult *= b;
    }
    printf("The multiplication of all the digits of the number provided is %d ",mult);
}