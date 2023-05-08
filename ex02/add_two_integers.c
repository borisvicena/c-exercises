#include <stdio.h>

int add_two_integers(int num_a, int num_b) {
    return num_a + num_b;
}

int main(void) {

    int first_number = 0;
    int second_number = 0;

    printf("Enter the first number: ");
    scanf("%d", &first_number);
    printf("Enter the second number: ");
    scanf("%d", &second_number);

    printf("The output is: %d\n", add_two_integers(first_number, second_number));

    return 0;
}