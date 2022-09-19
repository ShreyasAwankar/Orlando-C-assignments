// Write a program to read the percentage from the user.
// If percentage is > 80, print "distinction".
// If percentage is > 60, print "First Class".
// If percentage is > 50, print "Second Class".
// If percentage is > 40, print "Third Class".
// Otherwise fail.
#include <stdio.h>
void main(){
    int p;
    printf("Enter the percentage\n");
    scanf("%d",&p);
    if(p>=80)
    printf("Distinction");
    else if(p>=60)
    printf("First Class");
    else if(p>=50)
    printf("Second Class");
    else if(p>=40)
    printf("Third Class");
    else
    printf("Fail");
}