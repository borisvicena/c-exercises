#include <stdio.h>

void swap_values(int *num_a, int *num_b) {
    int tmp = 0;
    tmp = *num_a;
    *num_a = *num_b;
    *num_b = tmp;
}

int main(void) {

    int number_a = 0;
    int number_b = 0;

    printf("Enter the first number: ");
    scanf("%d", &number_a);
    printf("Enter the second number: ");
    scanf("%d", &number_b);

    printf("Values before swapping\n");
    printf("- Number A: %d\n", number_a);
    printf("- Number B: %d\n", number_b);

    swap_values(&number_a, &number_b);
    printf("Values after swapping\n");
    printf("- Number A: %d\n", number_a);
    printf("- Number B: %d\n", number_b);

    return 0;
}