// Write a program to read a string from user and display only vowels...
#include <stdio.h>
void main()
{
   char str[20];
   printf("Enter your string\n");
   gets(str);
   printf("The vovels in the string are\n");
   for(int i=0; i<20; i++){
   if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
   printf("%c ", str[i]);
   }
}