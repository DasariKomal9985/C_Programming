#include <stdio.h>

union Data {
    int i;
    float f;
    char ch;
};

int main() {
    union Data d;

    d.i = 10;
    printf("Integer: %d\n", d.i);

    d.f = 20.5;
    printf("Float: %.2f\n", d.f);

    d.ch = 'A';
    printf("Char: %c\n", d.ch);

    // Check overwritten values
    printf("\nAfter writing char 'A':\n");
    printf("Integer: %d\n", d.i);  // overwritten
    printf("Float: %.2f\n", d.f);  // overwritten

    return 0;
}
