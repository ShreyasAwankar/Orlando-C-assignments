#include <stdio.h>
void main(){
    int a,b,c;
    printf("Enter two numbers:\n");
    scanf("%d%d", &a,&b);
    c=a;
    a=b;
    b=c;
    printf("Swapped numbers are a = %d and b = %d", a,b);
}