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
            do
            {
                printf("%d\t", b);
                b++;
            } while (a >= b);
        }
        else
        {
            do
            {
                printf("%d\t", a);
                a++;
            } while (b >= a);
            break;
        }

    case 2:
        if (a > b)
        {
            do
            {
                printf("%d\t", a);
                a--;
            } while (a >= b);
        }
        else
        {
            do
            {
                printf("%d\t", b);
                b--;
            } while (b >= a);
        }
        break;

    case 3:
        if (a > b)
        {
            do
            {
                printf("%d\t", b);
                b += 2;
            } while (a >= b);
        }
        else
        {
            do
            {
                printf("%d\t", a);
                a += 2;
            } while (b >= a);
        }
        break;

    case 4:
        if (a > b)
        {
            do
            {
                printf("%d\t", b);
                b += 3;
            } while (a >= b);
        }
        else
        {
            do
            {
                printf("%d\t", a);
                a += 3;
            } while (b >= a);
        }
        break;

    default:
        printf("Wrong choice.");
    }
}