#include <stdio.h>
void main()
{
    int a;
    printf("Enter a number \n");
    scanf("%d", &a);
    a %= 100;
    a /= 10;
    printf("%d\n", a);
    if (a % 2 == 0)
        printf("The second last digit of entered number is even.");
    else
        printf("The second last digit of entered number is odd.");
}
