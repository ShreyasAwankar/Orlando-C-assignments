#include <stdio.h>
void main(){
    float rate,i;
    int n,p;
    printf("Enter principle, rate, interest \n");
    scanf("%f%d%d",&rate, &n,&p);
    i = p*n*rate/100;
    printf("The simple interest is:  %f", i);
}