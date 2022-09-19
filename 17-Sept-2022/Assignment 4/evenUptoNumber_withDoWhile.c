// Write a program to read a number from user and print all the even numbers using that number. Using while loop and for loop.
#include <stdio.h>
void main(){
    int a;
    printf("Enter your number\n");
    scanf("%d",&a);
    do
    {
        if (a%2==0)
        printf("%d\t",a);
        a--;
    } while (a>0);
}