#include <stdio.h>
void main(){
    int num,b, digit, counter=0;
    printf("Enter your number\n");
    scanf("%d",&num);
    printf("Enter the digit\n");
    scanf("%d",&digit);
    while (num>0){
        b = num%10;
        if(b==digit){
            counter++;
        }
        num/=10;
    }
    printf("The entered number contains %d %ds",counter,digit);
}