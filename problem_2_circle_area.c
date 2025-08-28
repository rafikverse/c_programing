#include<stdio.h>

//Input the radius of a circle (float) and print its area.

int main()
{
    float radius,area;

    printf("Enter the radius of a circle: ");
    scanf("%f",&radius);

    area = 3.1416 * radius * radius;


    printf("The area of the circle is %f.\n",area);

    return 0;
}
