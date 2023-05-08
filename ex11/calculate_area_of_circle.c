#include <stdio.h>
#include <math.h>

float area_of_circle(float r) {
    return M_PI * pow(r, 2); 
}

int main(void) {

    float radius = 0;
    
    printf("Enter value: ");
    scanf("%f", &radius);

    printf("Area of circle is: %.2f\n", area_of_circle(radius));

    return 0;
}