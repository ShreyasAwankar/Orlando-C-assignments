#include <stdio.h>
int power(int a, int b){
    int c=1 ;
    while(b>0){
        c *= 2;
        b--;
    }
    return c;
}
void main(){
    int z;
    z = power(2,5);
    printf("power is  %d", z);
}