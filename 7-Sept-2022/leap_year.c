#include <stdio.h>
void main(){
    int a;
    printf("Enter a year \n");
    scanf("%d",&a);
    if(a%400==0)
    printf("The entered year %d: is a leap year.",a);
    else if (a%100==0)
    printf("The entered year %d is not a leap year.", a);
    else if(a%4==0)
    printf("The entered year %d is a leap year.", a);
    else
    printf("The entered year %d is not a leap year.");
}