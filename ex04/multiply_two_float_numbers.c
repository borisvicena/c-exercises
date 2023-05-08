#include <stdio.h>

float multiply(float num_a, float num_b) {
    return num_a * num_b;
}

int main(void) {
    
    float number_a = 0;
    float number_b = 0;

    printf("Enter the first (float) number: ");
    scanf("%f", &number_a);
    printf("Enter the second (float) number: ");
    scanf("%f", &number_b);


    printf("The output is: %f\n", multiply(number_a, number_b));


    return 0;
}