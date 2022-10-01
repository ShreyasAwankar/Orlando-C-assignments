/* Write a program to pass any function using call by address and perform square of all the parameters in clalled function and print the result in calling function. */
#include <stdio.h>

void squar(int *x, int *y,int *z){
    *x *= *x;
    *y *= *y;
    *z *= *z;
}

void main(){
    int a,b,c;
    printf("Enter your numbers\n");
    scanf("%d%d%d", &a,&b,&c);
    squar(&a,&b,&c);
    printf("The squares are %d %d %d",a, b,c);

}