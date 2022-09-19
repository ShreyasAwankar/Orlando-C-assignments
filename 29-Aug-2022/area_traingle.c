#include <stdio.h>
void main(){
    int base;
    int height;
    float area;
    printf("Enter the base and height of the traingle\n");
    scanf("%d %d", &base, &height);
    area = 0.5*base*height;
    printf("The area of traingle with given dimensions is: %f", area);
}