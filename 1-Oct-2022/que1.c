// Write a program to pass every element of 2D array to a function and print only those elements which are prime. Read elements from the user.
#include <stdio.h>
void primechecker(int a){
    int shivgami = 1;
    for(int i = 2;i<=a/2;i++){
        if(a%i==0){
        shivgami=0;
        break;
        }
    }
    if(shivgami ==1 && a!=1)
    printf("%d ",a);
}

void main(){
    int r,c;
    printf("Enter the number of rows in your array?\n");
    scanf("%d", &r);
    printf("Enter the number of columns in your array?\n");
    scanf("%d", &c);
    int array[r][c];
    for(int j = 0; j<r;j++){
        for (int k = 0;k<c;k++){
            printf("Array[%d][%d]?\n",j,k);
            scanf("%d", &array[j][k]);
        }
    }
    printf("The prime elements in the array are.\n");
    for(int j = 0; j<r;j++){
        for (int k = 0;k<c;k++){
            primechecker(array[j][k]);
        }
    }
}