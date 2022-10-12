//WAP to find sum of right diagonal in a matrix
#include <stdio.h>
#define ROWS 3
#define COLS 3
void main(){
int i,j,sum=0;
int array[ROWS][COLS];
for(i=0; i<ROWS; i++){
    for(j=0; j<COLS; j++){
        printf("array[%d][%d]=?\n",i,j);
        scanf("%d",&array[i][j]);
    }
} 
for(i=0; i<ROWS; i++){
    for(j=0; j<COLS; j++){
        if(i+j == ROWS-1)
        sum+=array[i][j];
    }
} 
printf("The sum of right diagonal elements is %d", sum);
}