#include <stdio.h>
void main(){
    int a = (5>2&&3>7);
    printf("%d\n",a);

    a =(9>2!=5<3!=7);
    printf("%d\n",a);

    a = !5;
    printf("%d\n",a);

    a= (27 != 28);
    printf("%d\n",a);
    
    a = (18>35 || 9 != 3 && (7==(49/7)));
    printf("%d\n",a);

    a=(12*2+5*2-1*9/3);
    printf("%d\n",a);
}