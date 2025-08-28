#include<stdio.h>

//Input a character and print it along with its ASCII value.

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c",&ch);

    printf("Character = %c\n",ch);
    printf("ASCII value = %d\n",ch);

    return 0;
}
