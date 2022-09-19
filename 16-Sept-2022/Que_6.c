#include <stdio.h>
void main(){
    int a,b,sum=0;
    printf("Enter your number\n");
    scanf("%d",&a);
    while (a>0){
        b=a%10;
        a/=10;
        if(b%2==0){
            sum+=b;
        }
    }
    printf("The sum of all the even digits of the entered number is %d ", sum);
}