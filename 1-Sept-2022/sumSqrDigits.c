#include <stdio.h>
void main(){
    int sum = 0, a, b;
    printf("Enter your number: ");
    scanf("%d", &a);
    while (a!=0){
        b = a%10;
        a = a/10;
        sum += b*b;
    }
    printf("The sum square of digits of the entered number is: %d", sum);
}