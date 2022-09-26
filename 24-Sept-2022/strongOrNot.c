// Write a program to check if the given number is strong or not.
#include <stdio.h>
void main(){
    int num,a,b,c, sum = 0, fact;
    printf("Enter your number\n");
    scanf("%d", &num);
    int z = num;
    while (z>0){
        a = z%10;
        fact = 1;
        while(a>0){
            fact*=a;
            a--;
        }
        sum+=fact;
        z/=10;
    }
    if(sum == num)
    printf("The entered number %d is a strong number.", num);
    else
    printf("The entered number %d is not a strong number.", num);
}