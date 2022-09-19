#include <stdio.h>
#include <string.h>

void main(){
    int num, b, b1, b2, b3;

    printf("Enter a three digit octal number\n");
    scanf("%d",&num);
    b= num % 10;
    num/=10;
    b1 = (b==0)?0000:(b==1)?1:(b==2)?10:(b==3)?11:(b==4)?100:(b==5)?101:(b==6)?110:(b==7)?111:(b==8)?1000:1001;

    b= num % 10;
    num/=10;
    b2 = (b==0)?0000:(b==1)?1:(b==2)?10:(b==3)?11:(b==4)?100:(b==5)?101:(b==6)?110:(b==7)?111:(b==8)?1000:1001;

    b= num % 10;
    num/=10;
    b3 = (b==0)?0000:(b==1)?1:(b==2)?10:(b==3)?11:(b==4)?100:(b==5)?101:(b==6)?110:(b==7)?111:(b==8)?1000:1001;

    // Assuming binary output as four clusters of 4 digit numbers and there will be zeros before the first '1'in the output ex- 0011 --> 11, 101 --> 0101 etc.
    printf("The ocatal to binary: %d %d %d",b3,b2,b1); //printf goes right to left
}