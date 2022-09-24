// Write a program to multiply 10 array elements.
#include <stdio.h>
void main(){
    float a[10];
    printf("Enter your elements\n");
    for (int i = 0; i<10; i++){
        scanf("%f", &a[i]);
    }
    float mult = 1;
    for (int j = 0; j< 10; j++){
        mult*=a[j];
    }
    printf("The multiplication of the entered array elements is %.3f ",mult);
}