#include<stdio.h>

//Program to calculate cube of a number.

int main()
{
    int n,cube;

    //Taking number 'n' from the user.
    printf("Enter the value of number n: \n");
    scanf("%d",&n);

    //Calculating cube of a number.
    cube = n * n * n;

    //Displaying the result.
    printf("Cube of n is:%d \n",cube);

    return 0;
}
