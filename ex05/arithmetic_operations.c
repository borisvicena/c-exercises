#include <stdio.h>

float addition(float num_a, float num_b) {
    return (num_a + num_b);
}

float substraction(float num_a, float num_b) {
    return num_a - num_b;
}

float multiplication(float num_a, float num_b) {
    return num_a * num_b;
}

float division(float num_a, float num_b) {
    return num_a / num_b;
}

float modulo(float num_a, float num_b) {
    return (unsigned)num_a % (unsigned)num_b;
}

int main(void) {
    
    float number_a = 0;
    float number_b = 0;

    printf("Enter the first number: ");
    scanf("%f", &number_a);
    printf("Enter the second number: ");
    scanf("%f", &number_b);

    printf("\nArithmetic operations\n");
    printf("Sum: %.2f\n", addition(number_a, number_b));
    printf("Sub: %.2f\n", substraction(number_a, number_b));
    printf("Mul: %.2f\n", multiplication(number_a, number_b));
    printf("Div: %.2f\n", division(number_a, number_b));
    printf("Mod: %.2f\n", modulo(number_a, number_b));

    return 0;
}