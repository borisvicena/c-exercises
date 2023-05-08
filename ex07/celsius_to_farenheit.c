#include <stdio.h>

float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

int main(void) {

    float celsius_value = 0;
    
    printf("Enter value in Celsius: ");
    scanf("%f", &celsius_value);

    printf("Value in Fahrenheit: %.2f\n", celsius_to_fahrenheit(celsius_value));

    return 0;
}