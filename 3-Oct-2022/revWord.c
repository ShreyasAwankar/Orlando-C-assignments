// Write a program to reverse every word of the string.

#include <stdio.h>
#include <string.h>

int stringln(char s[]) {
   int i = 0;

   while(s[i]!='\0')
      i++;
   return i;	
}

void stringrev(char st[]) {
   int i,j,len;
   char ch;

   j = len = stringln(st) - 1;
   i = 0;

   while(i < j) {
      ch = st[j];
      st[j] = st[i];
      st[i] = ch;
      i++;
      j--;
   }
}

void main () {
   char str1[1000];
   char reverse[100]="";
   char temp[50];
   int i,j,n;
   printf("Enter your string\n");
   gets(str1);

   n = stringln(str1);

   for(i = 0; i < n; i++) {

      for(j = 0; i < n && str1[i]!=' '; i++,j++) {
        temp[j] = str1[i];
      }
      
      temp[j] = '\0';

      stringrev(temp);

      strcat(reverse, temp);
      strcat(reverse, " ");
   }
   
   printf("String before reversing the words %s\n", str1);
  printf("\nstring after reversing the word: %s", reverse);
   
}