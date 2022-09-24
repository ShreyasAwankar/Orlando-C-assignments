// Write a program to read 10 elements in an array and display the odd elements.
#include <stdio.h>
void main(){
    int array[10], i;
    printf("Enter array elements\n");
    for (i = 0; i < 10; i++){
        scanf("%d", &array[i]);
    }
    printf("Odd array elements are:\n");
    for (i = 0; i < 10; i++){
        if(array[i]%2==1) 
        printf("%d\t", array[i]);
    }
}