// Function without parameter but with return value
#include <stdio.h>

float areaCircle() {
    float radius;
    printf("Radius : ");
    scanf("%f",&radius);
    return 3.14 * radius * radius;;    
}

int main() {
    float result;
    result = areaCircle();    
    printf("Area of Circle = %.2f", result);
    return 0;
}

