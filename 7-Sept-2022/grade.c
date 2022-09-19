#include <stdio.h>
void main () {

    int percent;
    printf ("Enter the percentage\n");
    scanf ("%d", &percent);

    if (percent>=95)
    {
        printf ("Distinction grade");
    }
    else if (percent >85)
    {
        printf("First grade");
    }
    else if (percent >75)
    {
        printf("Second grade");
    }
    else if (percent >60)
    {
        printf ("Third grade");
    }
    else  
    {
    printf("Fail");
    }
   
}