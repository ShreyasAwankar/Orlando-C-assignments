/* Write a program to read the password from the user check wheather its valid or not.
Conditions --
1.Password must be atleast 8 characters long.
2.Password must be maximum 13 characters long.
3.There should atleast be one uppercase charecter.
4.There should atleast be one lowercase charecter.
5.There should atleast be a special charecter in the password.
*/

#include <stdio.h>
#include <string.h>
int passwordChecker(char s1[30])
{
    int k = 0, u = 0, d = 0, s = 0;
    if (strlen(s1) > 14)
        return 0;
    if (strlen(s1) < 9)
        return 0;

    for (int i = 0; i < strlen(s1); i++)
    {
        if (s1[i] >= 'a' && s1[i] <= 'z')
            k = 1;
        if (s1[i] >= 'A' && s1[i] <= 'Z')
            u = 1;
        if (s1[i] >= '0' && s1[i] <= '9')
            d = 1;
        if (s1[i] == '#' || s1[i] == '_' || s1[i] == '@')
            s = 1;
    }
    if (k == 1 && u == 1 && d == 1 && s == 1)
        return 1;
    else
        return 0;
}

void main()
{
    char str1[30];
    printf("Enter your password\n");
    gets(str1);
    if (passwordChecker(str1) == 1)
        printf("Password is valid.");
    else
        printf("Your password dose not match either one or more of the following criterias.\n1.Password must be atleast 8 characters long.\n2.Password must be maximum 13 characters long.\n3.There should atleast be one uppercase charecter.\n4.There should atleast be one lowercase charecter.\n5.There should atleast be a special charecter in the password.\n6.Password must be atleast characters long.\n7.Password must be maximum 13 characters long.");
}
