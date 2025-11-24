

/*

Pointer that points to a memory location that is freed or out of scope.

*/











#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 20;

    free(ptr);   // memory freed
    // ptr is now a dangling pointer

    // printf("%d", *ptr);  // ❌ dangerous, memory freed

    ptr = NULL;  // ✔ fix dangling pointer

    return 0;
}
