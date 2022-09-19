// Write a program to read two numbers from user. If first number is greater than second then perform their addition otherwise perform their substraction. Display the result... 
#include <stdio.h>
void main(){
    int a,b;
    printf("Enter two numbers \n");
    scanf("%d%d",&a,&b);
    if (a>b)
    printf("The addition is: %d", a+b);
    else
    printf("The substraction is: %d", b-a);
}