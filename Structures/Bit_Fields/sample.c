#include <stdio.h>

struct Flags {
    unsigned int a : 1;
    unsigned int b : 2;
    unsigned int c : 3;
};

int main() {
    struct Flags f;

    f.a = 1;
    f.b = 3; // max is 3 (2 bits)
    f.c = 5; // max is 7 (3 bits)

    printf("a = %u\nb = %u\nc = %u\n", f.a, f.b, f.c);
    return 0;
}
