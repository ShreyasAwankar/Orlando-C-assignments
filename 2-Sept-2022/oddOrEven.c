#include <stdio.h>
void main(){
    int a;
    printf("Enter a number \n");
    scanf("%d",&a);
    // Assuming '-1' as odd, '1' as even...
    // int c =(a%2==0)?1:-1;
    if(a%2==0){
        printf("The given number is an even number");
    }
    else{
        printf("The given number is an odd number");
    }
    // printf("The number is %d", c);
}