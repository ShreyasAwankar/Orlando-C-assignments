#include <stdio.h>
void main(){
    float rad;
    printf("Enter the radius \n");
    scanf("%f",&rad);
    // Assuming '-1' as odd, '1' as even...
    float c = 2*3.14*rad;
    printf("The circumference %f", c);
}