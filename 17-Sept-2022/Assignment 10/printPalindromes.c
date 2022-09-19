// Write a program to print palindromes between two entered numbers.
#include <stdio.h>
void main()
{
    int a,a1,b,b1, num, c, reversed;
    printf("Enter two  numbers\n");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        for (b; b <= a; b++)
        {
            num = b;
            reversed = 0;
            b1 = b;
            while (b1 != 0)
            {
                // The code below is the formula to make reverse of all the positive as well as negative numbers.
                c = b1 % 10;
                reversed = reversed * 10 + c;
                b1 /= 10;
            }
            if (reversed == num)
                printf("%d\t", reversed);
        }
    }
    else
    {
        for (a; a <= b; a++)
        {
            reversed=0;
            num = a;
            a1 = a;
            while (a1 != 0)
            {
                // The code below is the formula to make reverse of all the positive as well as negative numbers.
                c = a1 % 10;
                reversed = reversed * 10 + c;
                a1 /= 10;
            }
            if (reversed == num)
                printf("%d\t", reversed);
        }
    }
}
