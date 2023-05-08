#include <stdio.h>

void find_size(char a, short b, int c, long d, float e, double f) {
    printf("Size of char: %ld bytes\n", sizeof(a));
    printf("Size of short: %ld bytes\n", sizeof(b));
    printf("Size of int: %ld bytes\n", sizeof(c));
    printf("Size of long: %ld bytes\n", sizeof(d));
    printf("Size of float: %ld bytes\n", sizeof(e));
    printf("Size of double: %ld bytes\n", sizeof(f));
}

int main(void) {

    char charType = '\0';
    short shortType = 0;
    int intType = 0;
    long longType = 0;
    float floatType = 0;
    double doubleType = 0;

    find_size(charType, shortType, intType, longType, floatType, doubleType);

    return 0;
}