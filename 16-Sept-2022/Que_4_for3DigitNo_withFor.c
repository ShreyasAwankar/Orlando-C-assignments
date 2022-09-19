#include <stdio.h>
void main(){
    int num,b,c,entered_num,sum=0;
    printf("Enter your number\n");
    scanf("%d",&num);
    entered_num=num;
    for (num;num>0;num/=10){
        b = num%10;
        b*=b*b;
        sum+=b;
    }
    if (sum == entered_num)
    printf("Given number is an Armstrong number");
    else
    printf("Given number is not an Armstrong number ");
}