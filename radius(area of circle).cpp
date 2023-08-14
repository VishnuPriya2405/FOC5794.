#include <stdio.h>
int main() {
    int radius;
    float pi = 3.14;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    float area = pi * radius * radius;
    printf("Area of the circle with radius %d is: %.2f\n", radius, area);  
    return 0;
}