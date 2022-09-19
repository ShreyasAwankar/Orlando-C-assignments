#include <stdio.h>
void main(){
    int a, b, c, d, e, sum, avg;
    printf("Enter the marks of 5 students\n");
    scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
    sum = a+b+c+d+e;
    avg = sum/5;
    printf("The total of the marks entered is: %d \n", sum);
    printf("The average of the marks entered is: %d", avg);
}
