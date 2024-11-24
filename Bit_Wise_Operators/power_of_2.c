#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is a power of 2
bool isPowerOfTwo(int n) {
    // Check if n is greater than 0 and (n & (n - 1)) is 0
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    int num;

    // Test cases
    int testCases[] = {1, 2, 3, 4, 5, 8, 16, 18, 32, 0, -4};
    int size = sizeof(testCases) / sizeof(testCases[0]);

    for (int i = 0; i < size; i++) {
        num = testCases[i];
        if (isPowerOfTwo(num)) {
            printf("%d is a power of 2.\n", num);
        } else {
            printf("%d is not a power of 2.\n", num);
        }
    }

    return 0;
}
