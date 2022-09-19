#include <stdio.h>
void main(){
    int num,b,c,entered_num,sum=0;
    printf("Enter your number\n");
    scanf("%d",&num);
    int count=0;
    while (num>0){
        num/=10;
        count++;
    }
    printf("The number contains %d digits.",count);
}