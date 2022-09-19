// Write aprogram to check for the prime number.
#include <stdio.h>
void main(){
    int num, i=2, checker=1;
    printf("Enter your number\n");
    scanf("%d",&num);
    while(i<num/2){
        if(num%i == 0){
            checker=0;
            break;
        }
        i++;
    }
    if(checker==1)
    printf("The number entered is prime.");
    else
    printf("The number entered is not prime.");
}