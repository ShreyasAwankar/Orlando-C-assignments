//Write a program to read 5 numbers from the user and find their total.
#include <stdio.h>
void main(){
    int a,b,c,d,e,sum;
    printf("Enter five numbers\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    printf("The sum of the entered 5 numbers is: %d",sum);
}