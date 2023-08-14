#include <stdio.h>
#define PI 3.14159 
int main() {
    float radius, perimeter, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    perimeter = 2 * PI * radius;
    area = PI * radius * radius;
    printf("Perimeter of the circle: %.2f\n", perimeter);
    printf("Area of the circle: %.2f\n", area);
    return 0;
}