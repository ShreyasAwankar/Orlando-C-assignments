// Write a program to read two three digit numbers from user. Add all the digits of those two numbers and check wheather the sum is divisible by 3 and 5.
#include <stdio.h>
void main(){
    int a,b,a1,a2,a3,b1,b2,b3,sum;
    printf("Enter two 3 digit numbers \n");
    scanf("%d%d",&a,&b);
    a1 = a%10;
    a/=10;
    a2 = a%10;
    a/=10;
    a3=a%10;

    b1 = b%10;
    b/=10;
    b2 = b%10;
    b/=10;
    b3 = b%10;

    sum = a1+a2+a3+b1+b2+b3;

    if(sum%3==0 && sum%5==0)
    printf("The sum of all digits of the entered nummbers is divisible by 3 & 5");
    else
    printf("The sum of all digits of the entered nummbers is not divisible by 3 & 5");
}