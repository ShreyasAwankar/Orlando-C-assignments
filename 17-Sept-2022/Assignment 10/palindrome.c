// Write a program to check if the number is palindrome or not.
#include <stdio.h>
void main()
{
    int a,num,c,reversed_a=0;
    printf("Enter your number\n");
    scanf("%d", &a);
    num = a;
    while (a != 0)
    {
        // The code below is the formula to make reverse of all the positive as well as negative numbers.
        c= a%10;
        reversed_a = reversed_a * 10 + c;
        a/=10;
    }
 
    if (num == reversed_a)
        printf("Entered number is a palindrome");
    else
        printf("Entered number is not a palindrome");
}