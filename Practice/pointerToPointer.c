#include <stdio.h>
void main(){
    int a = 10;
    int *p = &a;
    int **q = &p;
    printf("&a= %d\n", &a);
    printf("p= %d\n", p);
    printf("&*p= %d \n", &*p);
    printf("&p= %d\n", &p);
    printf("*p= %d\n", *p);
    printf("*&p= %d\n", *&p);
    printf("*q= %d\n", *q);
    printf("q= %d\n", q);
    printf("**q= %d\n", **q);

}