// Write a program to read a number from user and check how many times that element occured in 1D array of 10 elements.
#include <stdio.h>
void main(){
    int array[10], i, k;
    printf("Enter array elements\n");
    for (i = 0; i < 10; i++){
        scanf("%d", &array[i]);
    }
    printf("\n");
    printf("Enter the element you want to search\n");
    scanf("%d", &k);
    int counter=0;
    for (i = 0; i < 10; i++){
        if (array[i]==k)
        counter++;
    }
    printf("Entered element %d occured for %d times", k, counter);

}