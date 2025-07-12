#include<stdio.h>

//Write a program to check if given character is digit or not.

int main()
{
    char ch;
    printf("Enter a character: \n");
    scanf("%c",&ch);

    if(ch>='0' && ch<='9')
    {
        printf("The character '%c' is a digit.",ch);
    }
    else
    {
        printf("The character '%c' is not a digit.",ch);
    }

    return 0;
}
