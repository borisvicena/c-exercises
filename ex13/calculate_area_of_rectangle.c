#include <stdio.h>
#include <math.h>

float area_of_rectangle(float l, float w) {
    return l * w;
}

int main(void) {
    
    float length = 0;
    float width = 0;
    
    printf("Enter length value for a recangle: ");
    scanf("%f", &length);
    printf("Enter width value for a recangle: ");
    scanf("%f", &width);

    printf("Area of a rectangle is: %.2f\n", area_of_rectangle(length, width));

    return 0;
}