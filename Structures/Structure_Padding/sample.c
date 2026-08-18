#include <stdio.h>

struct A {
    char c;   // 1 byte
    int x;    // 4 bytes (padding added)
    char d;   // 1 byte
};

int main() {
    struct A obj;

    printf("Size of struct A = %lu bytes\n", sizeof(obj));
    return 0;
}
