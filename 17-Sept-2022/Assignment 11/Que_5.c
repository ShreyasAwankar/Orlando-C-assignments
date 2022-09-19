// Write a program to read a number from the user and find the sum of all the even numbers in them.
#include <stdio.h>
void main(){
    int a,b,sum=0;
    printf("Enter your number\n");
    scanf("%d",&a);
    while(a>0){
        b=a%10;
        if(b%2==0){
           sum+=b; 
        }
        a=a/10;
    }
    printf("The sum of all the even digits in the number entered is %d",sum);
}