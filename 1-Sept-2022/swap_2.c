#include <stdio.h>
void main(){
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d", &a,&b);
    a = a+b; //5+7=12
    b = a-b; //12-7=5
    a = a-b; //12-5=7
    printf("Swapped numbers are a = %d and b = %d", a,b);
}