/* Program to find the number of bits used by an integer, a short and a long.   





~0 → makes all bits = 1 for that type.
e.g., for int, ~0 = 11111111 11111111 11111111 11111111

Then each shift (>> 1) removes one bit.

The number of shifts before x becomes 0 equals the bit width of that type.

Divide by 8 → bytes.

*/




#include <stdio.h>

int bits_in_int() {
    unsigned int x = ~0;  // all bits = 1
    int count = 0;
    while (x) {
        x = x >> 1;       // shift right until all bits are gone
        count++;
    }
    return count;
}

int bits_in_short() {
    unsigned short x = ~0;
    int count = 0;
    while (x) {
        x = x >> 1;
        count++;
    }
    return count;
}

int bits_in_long() {
    unsigned long x = ~0;
    int count = 0;
    while (x) {
        x = x >> 1;
        count++;
    }
    return count;
}

int main() {
    printf("Bits in int: %d bits (%d bytes)\n", bits_in_int(), bits_in_int()/8);
    printf("Bits in short: %d bits (%d bytes)\n", bits_in_short(), bits_in_short()/8);
    printf("Bits in long: %d bits (%d bytes)\n", bits_in_long(), bits_in_long()/8);
    return 0;
}
