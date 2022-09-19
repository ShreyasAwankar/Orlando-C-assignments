#include <stdio.h>
void main(){
    int num;
    printf("eee\n");
    scanf("%d",&num);
    int count=0;
    while (num>0){
        num/=10;
        count++;
    }
    printf("%d",count);
}