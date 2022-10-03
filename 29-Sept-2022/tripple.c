//Write a program to check if a triple is present in an array of integers or not. If the vale appears three times in a row in an array is called triple.
#include <stdio.h>
void main(){
    int a,i,c=0;
    printf("How many elements you want in your array?\n");
    scanf("%d",&a);
    int array[a];
    for(i=0; i<a; i++){
        printf("array[%d]=?\n", i);
        scanf("%d",&array[i]);
    }
    for(i=0; i<a; i++){
        if(array[i] == array[i+1] && array[i] == array[i+2]){
        c=1;
        printf("%d is present for 3 times contiguously.", array[i]);
        }
    }
    if (c==0)
    printf("No element repeated for 3 times contiguously.");

}