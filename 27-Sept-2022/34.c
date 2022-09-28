#include <stdio.h>
#include <math.h>
int Armstrong(int a)
{
    int b = a, c, sum = 0, count = 0;
    c = a;
    while (c > 0)
    {
        count++;
        c /= 10;
    }
    printf("%d ", count);
    while (a > 0)
    {
        sum += pow(a % 10, count);
        a /= 10;
    }
    printf("%d sum ", sum);
    if (sum == b)
        return 1;
    return 0;
}
void main(){
    printf("%d ", Armstrong(153));

}