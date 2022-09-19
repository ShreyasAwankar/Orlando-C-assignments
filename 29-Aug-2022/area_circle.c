#include <stdio.h>
void main(){
    float radius, circle_area;
    printf("Enter the radius of circle\n");
    scanf("%f", &radius);
    circle_area = 3.1415*radius*radius;
    printf("The area of the circle with the given radius is: %f", circle_area);
}