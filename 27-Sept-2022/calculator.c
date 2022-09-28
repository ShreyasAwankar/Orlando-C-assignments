// Write a program to make a calculator using user defined functions.
#include <stdio.h>
#include <stdlib.h>
float adder(float x, float y)
{
    float d = x + y;
    return d;
}

float sub(float x, float y)
{
    float d = x - y;
    return d;
}


float devider(float x, float y)
{
    float d = x / y;
    return d;
}

void main()
{
    char ch = 'y';
    do{
    float a, b;
    int choice;
    printf("Enter two numbers\n");
    scanf("%f%f", &a, &b);
    printf("Please enter the operation choice: \n 1 -> add \n 2 -> substract \n 3 -> devide \n 4 -> exit the program\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("The addition of two numbers is %.2f\n", adder(a, b));
        break;
    case 2:
        printf("The substraction of two numbers is %.2f\n", sub(a, b));
        break;
    case 3:
        printf("The division of two numbers is %.2f\n", devider(a, b));
        break;
    case 4:
        exit(0);
    }
    printf("Do you want to continue?[y/n]\n");
    scanf("%s",&ch);
    }while (ch != 'n');
}