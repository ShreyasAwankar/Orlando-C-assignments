#include <stdio.h>
void main(){
    int a,b,count=0;
    printf("Enter your number\n");
    scanf("%d",&a);
    for (a;a>0;a/=10){
        b=a%10;
        if(b%2==0){
            count++;
        }
    }
    printf("Entered number contains %d even numbers", count);
}