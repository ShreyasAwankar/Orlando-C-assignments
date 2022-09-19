#include <stdio.h>
#include <math.h>
void main(){
    int num,b,c,entered_num,sum=0;
    printf("Enter your number\n");
    scanf("%d",&num);
    int count=0;
    while (num>0){
        num/=10;
        count++;
    }
    entered_num=num;
    while (num>0){
        b = num%10;
        num/=10;
        c=pow(b,count);
        sum+=c;
    }
    if (sum == entered_num)
    printf("Given number is an Armstrong number");
    else
    printf("Given number is not an Armstrong number ");
}