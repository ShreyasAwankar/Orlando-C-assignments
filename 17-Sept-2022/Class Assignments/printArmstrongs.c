// Write a program to print all the armstrong numbers between two entered numbers.
// Input must be three digits numbers...
#include <stdio.h>
void main()
{
    int a, a1, b,c, b1, sum;
    printf("Enter two three  digit numbers\n");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        for (b; b <= a; b++)
        {
            sum=0;
            b1 = b;
            while (b1 > 0)
            {
                c = b1% 10;
                c *= c * c;
                sum += c;
                b1 /= 10;
            }
            if (sum == b)
                printf("%d\t",sum);
        }
    }
    else
    {
        for (a; a <= b; a++)
        {
            sum=0;
            a1 = a;
            while (a1 > 0)
            {
                c = a1% 10;
                c *= c * c;
                sum += c;
                a1 /= 10;
            }
            if (sum == a)
                printf("%d\t",sum);
        }
    }
}