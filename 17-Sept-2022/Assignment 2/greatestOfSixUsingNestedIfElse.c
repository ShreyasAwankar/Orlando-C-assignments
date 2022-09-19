// Write a program to find the greatest of six numbers using nested if-else ladder.
#include <stdio.h>
void main()
{
    int a, b, c, d, e, f;
    printf("Ennter 6 numbers\n");
    scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
    if (a > b)
    {
        if (a > c)
            if (a > d)
                if (a > e)
                    if (a > f)
                        printf("a is greater.");
    }

    else if (b > c)
    {
        if (b > d)
            if (b > e)
                if (b > f)
                    printf("b is greater");
    }
    else if (c > d)
    {
        if (c > e)
            if (c > f)
                printf("c is greater");
    }
    else if (d > e)
    {
        if (d > f)
            printf("d is greater");
    }
    else if (e > f)
        printf("e is greater ");
    else
        printf("f is the greater");
}