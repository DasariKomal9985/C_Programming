



/*
A generic pointer that can hold the address of any data type   but must be cast before dereferencing.

*/







#include <stdio.h>

int main() {
    int x = 10;
    float y = 5.5;

    void *ptr;

    ptr = &x;
    printf("Value of x = %d\n", *(int *)ptr);   // cast to int*

    ptr = &y;
    printf("Value of y = %.2f\n", *(float *)ptr); // cast to float*

    return 0;
}
