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
            while (a >= b)
            {
                printf("%d\t", b);
                b++;
            }
        }
        else
        {
            while (b >= a)
            {
                printf("%d\t", a);
                a++;
            }
            break;
        }

        case 2:
            if (a > b)
            {
                while (a >= b)
                {
                    printf("%d\t", a);
                    a--;
                }
            }
            else
            {
                while (b >= a)
                {
                printf("%d\t", b);
                b--;
                }
            }
            break;

        case 3:
            if (a > b)
            {
                while (a >= b)
                {
                    printf("%d\t", b);
                    b += 2;
                }
            }
            else
            {
                while (b >= a)
                {
                printf("%d\t", a);
                a += 2;
                }
            }
            break;

        case 4:
            if (a > b)
            {
                while (a >= b)
                {
                    printf("%d\t", b);
                    b += 3;
                }
            }
            else
            {
                while (b >= a)
                {
                printf("%d\t", a);
                a += 3;
                }
            }
            break;

        default:
            printf("Wrong choice.");
        }
    }