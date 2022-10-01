// Write a program in C to convert a decimal number to binary using recursion.
#include <stdio.h>
int dec(int x){
    int c;
    c = x%2;
    if (x>1)
    dec(x/2);   
    printf("%d", c);
}
void main(){
    int a,f;
    printf("Enter a decimal number\n");
    scanf("%d",&a);
    dec(a);
}