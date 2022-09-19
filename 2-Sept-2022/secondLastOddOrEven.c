#include <stdio.h>
void main(){
    int a;
    printf("Enter a three digit number \n");
    scanf("%d",&a);
    a/=10;
    // Assuming '-1' as odd, '1' as even...
    int c =(a%2==0)?1:-1;
    printf("The number is %d", c);
}