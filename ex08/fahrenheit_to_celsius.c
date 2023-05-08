#include <stdio.h>

float fahrenheit_to_celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

int main(void) {

    float fahrenheit_value = 0;
    
    printf("Enter value in Fahrenheit: ");
    scanf("%f", &fahrenheit_value);

    printf("Value in Celsius: %.2f\n", fahrenheit_to_celsius(fahrenheit_value));

    return 0;
}