#include<stdio.h>

//Write a program to print the average of 3 numbers.

int main()
{
    float a,b,c,average;
    printf("Enter three numbers: \n");
    scanf("%f %f %f",&a,&b,&c);

    average = (a+b+c)/3;

    printf("The average is: %f",average);
    return 0;
}
