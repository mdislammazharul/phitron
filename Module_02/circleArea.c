#include<stdio.h>

int main()
{
    //code for calculating the area of a circle
    int radius;
    printf("Enter the Radius of the Circle: ");
    scanf("%d", &radius);

    float area;
    area = 3.14159 * radius * radius;
    printf("The area of the Circle is: %f", area);

    return 0;
}
