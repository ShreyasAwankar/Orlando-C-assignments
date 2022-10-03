// Write a program to read a string from user and display the count of vovels and consonents...
#include <stdio.h>
void main()
{
   char str[20];
   int c1=0,c2=0;
   printf("Enter your string\n");
   gets(str);
   for(int i=0; i<20; i++){
   if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
   c1++;
   else if(str[i]=='\0')
   break;
   else if(str[i]!=' ')
   c2++;
   }
   printf("The vovels in the string are : %d\n", c1);
   printf("The consonents in the string are : %d", c2);
}