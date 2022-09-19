#include <stdio.h>
void main(){
    int a,b,count=0;
    printf("Enter your number\n");
    scanf("%d",&a);
    while (a>0){
        b=a%10;
        a/=10;
        if(b%2==1){
            count++;
        }
    }
    printf("Entered number contains %d odd numbers", count);
}