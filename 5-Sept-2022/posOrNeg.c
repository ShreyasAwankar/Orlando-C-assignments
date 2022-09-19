#include <stdio.h>
void main(){
    int a;
    printf("Enter a number \n");
    scanf("%d",&a);
    if(a%10>=0)
    printf("The entered number is positive.");
    else
    printf("The entered number is negative.");
}