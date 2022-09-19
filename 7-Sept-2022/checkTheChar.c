// Write a C program that take a charecte from user and check wheather its an alphabet, digit or a speciel character.
#include <stdio.h>
void main(){
    char a;
    printf("Enter a character \n");
    scanf("%c",&a);
    if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
    printf("The entered character %c is an alphabet.",a);
    else if( a >= '0' && a <= '9')
    printf("The entered character %c is an integer.",a);
    else 
    printf("The entered character %c is a special character",a);
} 