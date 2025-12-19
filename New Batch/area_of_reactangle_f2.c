// Function with parameter but no return value
#include <stdio.h>

void areaRectangle(float length, float width) {
    printf("Area of Rectangle = %f\n", length * width);
}

int main() {
    float l, w;

    printf("Enter Length : ");
    scanf("%f", &l);

    printf("Enter width : ");
    scanf("%f", &w);

    areaRectangle(l, w);

    return 0;
}

