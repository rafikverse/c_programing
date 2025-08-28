#include<stdio.h>

//Input two integers and print sum, difference, product, quotient, and remainder.

int main()
{
    int a, b, sum, difference, product, quotient, remainder;

    printf("Enter two integers: \n");
    scanf("%d %d",&a,&b);

    sum=a+b;
    difference=a-b;
    product=a*b;
    quotient=a/b;
    remainder=a%b;

    printf("Sum=%d, Difference=%d, Product=%d, Quotient=%d, and Remainder=%d",sum,difference,product,quotient,remainder);

    return 0;ss
}
