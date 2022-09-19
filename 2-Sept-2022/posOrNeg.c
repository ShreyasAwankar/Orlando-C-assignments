#include <stdio.h>
void main(){
    int a;
    printf("Enter a number \n");
    scanf("%d",&a);
    // Assuming '-1' as negative, '1' as positive and zero is neither positive or negative...
    int c =(a<=0)?((a<0)?-1:0):1;
    printf("The number is %d", c);
}