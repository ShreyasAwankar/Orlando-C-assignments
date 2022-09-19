#include <stdio.h>
void main(){
    int num,b,c,entered_num,sum=0;
    printf("Enter your number\n");
    scanf("%d",&num);
    entered_num=num;
    do{
        b = num%10;
        num/=10;
        b*=b*b;
        sum+=b;
    }while (num>0);
    if (sum == entered_num)
    printf("Given number is an Armstrong number");
    else
    printf("Given number is not an Armstrong number ");
}