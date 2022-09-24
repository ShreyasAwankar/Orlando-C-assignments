// Write a program to read 10 elements in an integer array and display them.
#include <stdio.h>
void main(){
    int array[10], i;
    printf("Enter array elements\n");
    for (i = 0; i < 10; i++){
        scanf("%d", &array[i]);
    }
    printf("Array elements entered are:\n");
    for (i = 0; i < 10; i++){
        printf("%d\t", array[i]);
    }
}