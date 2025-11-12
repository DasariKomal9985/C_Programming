/*  XOR operation without using ^ operator 




| A | B | A XOR B |
| - | - | ------- |
| 0 | 0 | 0       |
| 0 | 1 | 1       |
| 1 | 0 | 1       |
| 1 | 1 | 0       |


A XOR B = (A AND NOT B) OR (NOT A AND B)


XOR = (a & ~b) | (~a & b)


(a & ~b) = 0101 & 1100 = 0100 (4)
(~a & b) = 1010 & 0011 = 0010 (2)
OR them → 0100 | 0010 = 0110 (6)


*/

#include <stdio.h>

int main() {
    unsigned int a, b, result;

    printf("Enter first number: ");
    scanf("%u", &a);

    printf("Enter second number: ");
    scanf("%u", &b);

    result = (a & ~b) | (~a & b);  // XOR logic without using ^

    printf("\nResult of XOR (without ^): %u\n", result);

    return 0;
}
