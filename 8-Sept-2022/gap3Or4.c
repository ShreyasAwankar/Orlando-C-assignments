#include <stdio.h>

void main()
{
    int a,b;
    printf("Enter two numbers \n");
    scanf("%d%d",&a,&b);
    if (a>b){
        while(b<=a){
            if(b%3==0){
            printf("%d \t", b);
        }
        b++;
        }
    
    }
    else{
        while(a<=b){
        if(a%4==0){
        printf("%d \t", a);
        }
        a++;
    }
    }
}