
#include <stdio.h>

void main()
{
    int age, category;
    char gender;
    printf("Enter your gender\n");
    scanf("%c",&gender);
    printf("Enter your age and category\n");
    scanf("%d%d",&age, &category);

    if (age > 18 && gender == 'm' && category == 111)
        printf("As per your details, your fees would be Rs.1000");
    else if (age > 18 && gender == 'f' && category == 112)
        printf("As per your details, your fees would be Rs.800");
    else if (age > 18 && gender == 'm' && category == 112)
        printf("As per your details, your fees would be Rs.800");
    else if (age < 18 && gender == 'm' && category == 111)
        printf("As per your details, your fees would be Rs.300");
    else if (age < 18 && gender == 'm' && category == 112)
        printf("As per your details, your fees would be Rs.200");
    else if (age < 18 && gender == 'f' && category == 111)
        printf("As per your details, your fees would be Rs.100");
    else if (age < 18 && gender == 'f' && category == 112)
        printf("As per your details, your fees would be Rs.50");
    else
        printf("Since you belong to speciel category, we will give you the fees.");
}
