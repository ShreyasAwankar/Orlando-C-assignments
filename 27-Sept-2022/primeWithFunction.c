// Write a program to create a function called prime and send any value from main and check if the number is prime or not.
#include <stdio.h>

int prime(int a){
    for (int i =2 ; i<= a/2; i++){
        if (a%i==0)
        return 0;
    }
    return 1;
}
void main(){
    int k, l;
    printf("Enter your number\n");
    scanf("%d", &k);
    l = prime(k);
    if (l==1)
    printf("Entered number %d is prime\n", k);
    else
    printf("Entered number %d is not prime\n", k);
    
}