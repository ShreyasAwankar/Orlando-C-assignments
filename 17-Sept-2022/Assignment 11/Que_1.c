// Write a program to read more than two or two digit numbers and check if the second last digit is perfect or not.
#include <stdio.h>
void main(){
    int a,i=1,sum=0;
    printf("Enter your number\n",&a);
    scanf("%d",&a);
    while (i<a-1){
        if(a%i==0){
            sum+=i;
        }
        i++;  
    }
    if (sum == a)
    printf("The entered number is a perfect number.");
    else
    printf("The given number is not a perfect number.");
}