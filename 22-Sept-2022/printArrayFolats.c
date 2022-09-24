// Write a program to read 10 elements in an float array and display them.
#include <stdio.h>
void main(){
    float array[10] ;
    int i;
    printf("Enter array elements\n");
    for (i = 0; i < 10; i++){
        scanf("%f", &array[i]);
    }
    printf("Array elements entered are:\n");
    for (i = 0; i < 10; i++){
        printf("%.2f\t", array[i]);
    }
}