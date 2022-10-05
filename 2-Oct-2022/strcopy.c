// Write a program to create a userdefined function to copy a string into another. (like strcpy())
#include <stdio.h>
#include <string.h>
void strcopy(char *s1, char *s2){
    while(*s2!='\0'){
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1='\0';
}
void main(){
    char str1[]="welcome";
    char str2[]="hello";
    printf("String 1 before copying --> ");
    puts(str1);
    strcpy(str1,str2);
    printf("String 1 after copying --> ");
    puts(str1);
}
