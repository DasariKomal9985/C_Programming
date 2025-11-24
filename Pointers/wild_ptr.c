



/*

A pointer that is uninitialized (contains garbage address).


*/




#include <stdio.h>

int main() {
    int *ptr;   // wild pointer (no initialization)

    // *ptr = 10;  // ❌ dangerous, undefined behavior

    ptr = NULL;  // ✔ always initialize to NULL
    return 0;
}
