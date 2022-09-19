#include <stdio.h>
void main(){
    float fahrenheit, to_celsius;
    printf("Enter the temperature in fahrenheit\n");
    scanf("%f", &fahrenheit);
    to_celsius = (fahrenheit - 32)*0.5556;
    printf("The given temperature in celsius is: %f degree ", to_celsius);
}