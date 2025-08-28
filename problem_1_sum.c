#include<stdio.h>

//Take two integers as input and print their sum.

int main()
{
    int a,b,sum;

    printf("Enter two value:");
    scanf("%d %d",&a,&b);

    sum = a + b;
    printf("The sum is %d.\n",sum);

    return 0;
}
