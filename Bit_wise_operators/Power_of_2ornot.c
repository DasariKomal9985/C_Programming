/*
 * C program to check whether the given number is power of two or not using Bitwise operator.

 | Number | Binary   | num-1    | num & (num-1) | Result           |
| ------ | -------- | -------- | ------------- | ---------------- |
| 1      | 00000001 | 00000000 | 00000000      | ✅ Power of 2     |
| 2      | 00000010 | 00000001 | 00000000      | ✅ Power of 2     |
| 4      | 00000100 | 00000011 | 00000000      | ✅ Power of 2     |
| 8      | 00001000 | 00000111 | 00000000      | ✅ Power of 2     |
| 6      | 00000110 | 00000101 | 00000100      | ❌ Not power of 2 |
| 10     | 00001010 | 00001001 | 00001000      | ❌ Not power of 2 |
| 3      | 00000011 | 00000010 | 00000010      | ❌ Not power of 2 |
| 5      | 00000101 | 00000101 | 00000001      | ❌ Not power of 2 |
| 7      | 00000111 | 00000110 | 00000110      | ❌ Not power of 2 |
| 9      | 00001001 | 00001000 | 00001000      | ❌ Not power of 2 |
| 11     | 00001011 | 00001010 | 00001010      | ❌ Not power of 2 |
 */


#include <stdio.h>

int main() {
    unsigned int num;

    printf("Enter a number: ");
    scanf("%u", &num);

    if (num != 0 && (num & (num - 1)) == 0)
        printf("%u is a power of 2\n", num);
    else
        printf("%u is NOT a power of 2\n", num);

    return 0;
}
