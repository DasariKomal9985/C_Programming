#include <stdio.h>

// Function returns an integer
int add(int a, int b) { 
    return a + b;   // returning value
}

int main() {
    int result = add(10, 20);
    printf("Result = %d\n", result);
    return 0;
}
