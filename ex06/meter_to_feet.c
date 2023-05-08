#include <stdio.h>

float meter_to_feet(float num) {
    return num * 3.28084;
}

int main(void) {

    float num_in_meters = 0;
    printf("Enter value in meters: ");
    scanf("%f", &num_in_meters);

    printf("Value in feet: %.2f\n", meter_to_feet(num_in_meters));

    return 0;
}