#include <stdio.h>
void main(){
    float a, b, c;
    printf("Enter the verrtices of the traingle\n");
    scanf("%f%f%f", &a, &b, &c);
    if (a==b && b==c)
    printf("The tringle is an equilateral traingle.");
    else if(a==b || a==c || b==c)
    printf("The traingle is an isoscale traingle.");
    else 
    printf("The traingle is a scalene traingle.");
} 