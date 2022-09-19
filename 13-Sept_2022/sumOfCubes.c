// Write a program to find sum of cube of all the numbers upto given number and display all the even numbers from second last digit to last digit.
#include <stdio.h>
void main()
{
    int a, b=1, sum = 0, secondlastDigit, lastDigit;
    printf("Enter your number\n");
    scanf("%d", &a);
    while (a != 0)
    {
        b = a * a * a;
        sum += b;
        a--;
    }
    printf("The sum of cube of all the numbers is %d \n", sum);
    lastDigit = sum % 10;
    sum /= 10;
    secondlastDigit = sum % 10;
    if (lastDigit > secondlastDigit)
    {
        while (lastDigit >= secondlastDigit )
        {
            if(secondlastDigit%2 == 0)
            {
            printf("%d \t", secondlastDigit);
            }
            secondlastDigit++;
        }
    }
    else
    {
        while (lastDigit <= secondlastDigit)
        {   
            if(lastDigit %2 ==0){
            printf("%d \t", lastDigit);
            }
            lastDigit++;
        }
    }
}