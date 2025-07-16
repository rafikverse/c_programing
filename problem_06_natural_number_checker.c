#include<stdio.h>

int main()
{
    int number;

    printf("Enter a number: \n");
    scanf("%d",&number);

    if(number>=1)
    {
        printf("%d is a natural number.\n",number);
    }
    else
    {
        printf("%d is not a natural number.\n",number);
    }
    return 0;
}
