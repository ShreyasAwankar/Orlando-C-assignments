// Write a program to read two numbers from the user
//  Case 1 - Print even numbers between the given them in ascending order.
//  case 2 - Print even numbers between the given them in descending order.
//  Case 3 - If the user has given the first numbr as for odd number then print the number  has to be an even number.
//  Case 4 - Print even number after odd number (10-19)
#include <stdio.h>
void main()
{
    int a, b, choice;
    int z = 11;
    int y = 19;
    printf("Enter your numbers\n");
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
                if (b % 2 == 0)
                {
                    printf("%d\t", b);
                }
                b++;
            }
        }
        else
        {
            while (b >= a)
            {
                if (a % 2 == 0)
                {
                    printf("%d\t", a);
                }
                a++;
            }
        }
        break;

    case 2:
        if (a > b)
        {
            while (a >= b)
            {
                if (a % 2 == 0)
                {
                    printf("%d\t", a);
                }
                a--;
            }
        }
        else
        {
            while (b >= a)
            {
                if (b % 2 == 0)
                {
                    printf("%d\t", b);
                }
                b--;
            }
        }
        break;

    case 3:
        if (a % 2 == 1)
            printf("The number  has to be an even number.");
        else
            printf("%d", a);
        break;

    case 4:
        while (z < y)
        {
            printf("%d\t", z);
            z++;
        }
        break;

    default:
        printf("Invalid choice");
        break;
    }
}