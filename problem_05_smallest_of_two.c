#include<stdio.h>

//Write a program to check if given character is digit or not.

int main()
{
    int num1,num2,smallest;
    printf("Enter two numbers: \n");
    scanf("%d %d",&num1,&num2);

    if(num1<num2)
    {
        printf("%d is the smallest.",num1);
    }
    else
    {
        printf("%d is the smallest.",num2);
    }
    return 0;
}
