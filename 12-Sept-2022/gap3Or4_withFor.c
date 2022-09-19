#include <stdio.h>

void main()
{
    int a,b;
    printf("Enter two numbers \n");
    scanf("%d%d",&a,&b);
    if (a>b){
        for(b;b<=a;b++){
            if(b%3==0){
            printf("%d \t", b);
        }
        }
    
    }
    else{
        for(a;a<=b;a++){
        if(a%4==0){
        printf("%d \t", a);
        }
    }
    }
}