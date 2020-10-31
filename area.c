#include <stdio.h>
int main()
{
    float base, height, area;
    printf("\nEnter Base and Height of the triangle ");
    scanf("%f%f", &base, &height);
    area = 0.5 * base * height;
    printf("\n Area of the triangle is %f", area);
    return 0;
}