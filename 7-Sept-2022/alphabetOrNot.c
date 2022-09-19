#include <stdio.h>
void main(){
    char a;
    printf("Enter a character \n");
    scanf("%c",&a);
    if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
    printf("The character entered is an alphabet.");
    else
    printf("The character entered is not an alphabet");
}