#include <stdio.h>

int main() {
    float length, breadth, area, perimeter;

    printf("Enter the length of the Rectangle : ");
    scanf("%f", &length);

    printf("Enter the breadth of the Rectangle : ");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * ( length + breadth);

    printf("Area of Rectangle = %.2f\n", area);
    printf("Perimeter of Rectangle = %.2f", perimeter);
    return 0;
}