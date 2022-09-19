#include <stdio.h>
void main()
{
    int a, b, choice;
    printf("Enter your numbers\n");
    scanf("%d%d", &a, &b);
    printf("Please enter the choice\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("The addition is %d", a + b);
        break;
    case 2:
        printf("The substration is %d", a - b);
        break;
    case 3:
        printf("The multiplication is %d", a * b);
        break;
    case 4:
        printf("The division is %d", a / b);
        break;
    case 5:
        printf("The modulus is %d", a % b);
        break;
    default:
        printf("Wrong choice");
    }
}