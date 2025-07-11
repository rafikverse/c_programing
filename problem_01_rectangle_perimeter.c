#include<stdio.h>

//Program to calculate perimeter of a rectangle.

int main()
{
    int a,b,perimeter;

    //Taking sides 'a' and 'b' from then the user.
    printf("Enter the sides of a rectangle: \n");
    scanf("%d %d",&a,&b);

    //Calculating the perimeter of the rectangle.
    perimeter=2*(a+b);

    //Displaying the result.
    printf("The perimeter of the rectangle is: %d",perimeter);

    return 0;
}
