#include<stdio.h>
void main()
{
float c;int unit ;
printf("enter the unit: ");
scanf("%d",&unit);
if(unit<=50)
c=unit*1.45*0.63+100;
else if(unit<=75)
c=unit*2.60*.63+100;
else if(unit<=100)
c=unit*3.6*.63+100;
else if(unit<=500)
c=unit*7.05*.63+100;
else if(unit>500)
c=unit*11.05*.63+100;
printf("your electricity bill is %f",c);
}