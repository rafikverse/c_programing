#include<stdio.h>

//Input an integer (age), float (height), and character (initial), then print them in a formatted way.

int main()
{
    int age;
    float height;
    char initial;

    printf("Enter age,height(in feet and inch),first letter of name(initial): \n");
    scanf("%d %f %c",&age,&height,&initial);

    printf("Age: %d\n",age);
    printf("Height: %.2f\n",height);
    printf("Inital: %c\n",initial);

    return 0;
}
