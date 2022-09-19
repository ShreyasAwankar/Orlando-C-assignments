#include <stdio.h>
void main(){
    int num,sqr,sum=0;
    printf("Enter tour number\n");
    scanf("%d",&num);
    while(num!=0){
        sqr = num * num;
        sum += sqr;
        num--;
    }
    printf("The sum of squares of all the numbers upto given number is: %d",sum);  
}