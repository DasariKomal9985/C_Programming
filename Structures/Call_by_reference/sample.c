#include <stdio.h>

void modify(int *x) {
    *x = 100; // modifies original
}

int main() {
    int a = 10;
    modify(&a);
    printf("a = %d\n", a); // becomes 100
}
