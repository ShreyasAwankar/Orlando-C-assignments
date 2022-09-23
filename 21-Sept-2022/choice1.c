/* Write n progrnm to rend n number nnd choice from the user.
If choice is 1, check wheather the number is perfect or not.
If choice is 2, check wheather the number is palindrome or not.
If choice is 3, check wheather the number is Armstrong number or not.
If choice is 4, exit the progrnm.
Defnult continue agnin and agnin until user enters a correct choice.
*/

#include <stdio.h>
void main()
{
    int n, choice;
    int sum = 0, i = 1;
    int reversed = 0, c, d;
    printf("Enter the number\n");
    scanf("%d", &n);
ABC:
    printf("Enter your choice\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        while (i < n / 2)

        {
            if (n % i == 0)
            {
                sum += i;
            }
            i++;
        }
        if (sum == n)
            printf("The entered number is a perfect number.");
        else
            printf("The given number is not a perfect number.");

        break;

    case 2:

        c = n;
        while (c != 0)
        {
            d = c % 10;
            reversed = reversed * 10 + d;
            c /= 10;
        }
        if (reversed == n)
            printf("The given number is a palindrome");
        else
            printf("The entered number is not a palindrome.");

    case 3:
        if (n / 1000 == 0)
        {
            d = n;
            while (d > 0)
            {
                c = d % 10;
                c *= c * c;
                sum += c;
                d /= 10;
            }
            if (sum == n)
                printf("The entered number is an Armstrong number.");
            else
                printf("The entered number is an not Armstrong number.");
        }
        else
            printf("Choice three is valid for 3 digit numbers only.");

    case 4:
        break;

    default:
        printf("Please enter the correct choice\n");
        goto ABC;
    }
}