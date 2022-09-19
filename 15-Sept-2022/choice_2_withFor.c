#include <stdio.h>
void main()
{
    int a, b, choice;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    printf("Enter your choice\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        if (a > b)
        {
            for (b; a >= b; b++)
            {
                printf("%d\t", b);
            }
        }
        else
        {
            for (a; b >= a; a++)
            {
                printf("%d\t", a);
            }
            break;
        }

    case 2:
        if (a > b)
        {
            for (a; a >= b; a--)
            {
                printf("%d\t", a);
            }
        }
        else
        {
            for (b; b >= a; b--)
            {
                printf("%d\t", b);
            }
        }
        break;

    case 3:
        if (a > b)
        {
            for (b; a >= b; b += 2)
            {
                printf("%d\t", b);
            }
        }
        else
        {
            for (a; b >= a; a += 2)
            {
                printf("%d\t", a);
            }
        }
        break;

    case 4:
        if (a > b)
        {
            for (b; a >= b; b += 3)
            {
                printf("%d\t", b);
            }
        }
        else
        {
            for (a; b >= a; a += 3)
            {
                printf("%d\t", a);
            }
        }
        break;

    default:
        printf("Wrong choice.");
    }
}