// Write a c program to check two given integers and return the value whichever value is nearest to 13 without going over. Return 0 if both numbers go over.
#include <stdio.h>
int nearest(int x, int y)
{
    if (x >= 13 && y >= 13)
    {
        return 0;
    }
    else if (x < 13 && y > 13)
    {

        int z = x, r = y, counter1 = 0, counter2 = 0;
        while (z <= 13)
        {
            counter1++;
            z++;
        }
        while (r >= 13)
        {
            counter2++;
            r--;
        }
        if (counter1 < counter2)
            return x;
        else if (counter1 == counter2)
            return 2;
        else
            return y;
    }
    else if (x > 13 && y < 13)
    {
        int z = x, r = y, counter1 = 0, counter2 = 0;
        while (z >= 13)
        {
            counter1++;
            z--;
        }
        while (r <= 13)
        {
            counter2++;
            r++;
        }
        if (counter1 < counter2)
            return x;
        else if (counter1 == counter2)
            return 2;
        else
            return y;
    }
}
void main()
{
    int a, b, near;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    near = nearest(a, b);
    if(nearest(a,b)!=0 && nearest(a,b)!=2)
    printf("The nearest number to 13 is %d ", near);
    else if (nearest(a,b)==2)
    printf("Both the numbers share the same distance from 13");
    else
    printf("Both the numbers go over 13");
}
