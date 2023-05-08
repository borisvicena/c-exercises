#include <stdio.h>
#include <math.h>

float area_of_square(float a) {
    return pow(a, 2);
}

int main(void) {
    
    float num = 0;
    
    printf("Enter value: ");
    scanf("%f", &num);

    printf("Area of square is: %.2f\n", area_of_square(num));

    return 0;
}