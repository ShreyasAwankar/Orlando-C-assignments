// Write a program to read seven float values from the user and find their average.

#include <stdio.h>
void main(){
    float a,b,c,d,e,f,g,sum,avg;
    printf("Enter 7 float numbers\n");
    scanf("%f%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f,&g);
    sum=a+b+c+d+e+f+g;
    printf("The average of the entered numbers is: %f",sum/7);
}