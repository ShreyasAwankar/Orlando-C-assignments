#include <stdio.h>
void main(){
    int a;
    printf("Enter your number\n");
    scanf("%d",&a);
    while (a>0)
    {
        if (a%2==0)
        printf("%d\t",a);
        a--;
    } 
}