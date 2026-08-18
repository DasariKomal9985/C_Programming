#include <stdio.h>

void modify(int x) {
    x = 100; // only local copy changes
}

int main() {
    int a = 10;
    modify(a);
    printf("a = %d\n", a); // remains 10
}
