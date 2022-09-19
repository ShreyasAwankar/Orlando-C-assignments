#include <stdio.h>
void main(){
    int a,b,count=0;
    printf("Enter your number\n");
    scanf("%d",&a);
    do{
        b=a%10;
        a/=10;
        if(b%2==0){
            count++;
        }
    }while (a>0);
    printf("Entered number contains %d even numbers", count);
}