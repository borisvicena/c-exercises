#include <stdio.h>

int ascii_value(char c) {
    return (int)c;
}

int main(void) {

    char character = '\0';
    
    printf("Enter value: ");
    scanf("%c", &character);

    printf("ASCII value of %c is %d\n", character, ascii_value(character));

    return 0;
}