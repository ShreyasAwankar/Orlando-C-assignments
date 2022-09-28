// Write a program to convert a binary number into a decimal number.
#include <stdio.h>
int power(int a, int b){
    int c=1 ;
    while(b>0){
        c *= 2;
        b--;
    }
    return c;
}
void main(){
    int binArray[16];
    int a,i,j,sum=0;
    printf("Enter your binary number strictly in 16 bit format.\n");
    scanf("%d",&a);
    for (i=15, j=0; i>=0, j<15; i--,j++){
        binArray[i]=a%10;
        if(a%10==1)
        sum+=power(2,j);
        a/=10;
    }
    printf("The decimal of the entered binary number is %d\n", sum);
}
