/*Write a program to print the binary form of an integer.


(num >> i) & 1
For example, if the user inputs 5, the output should be 00000101.


| i | Operation | Result (binary) | Decimal |
| - | --------- | --------------- | ------- |
| 7 | 5 >> 7    | 00000000        | 0       |
| 6 | 5 >> 6    | 00000000        | 0       |
| 5 | 5 >> 5    | 00000000        | 0       |
| 4 | 5 >> 4    | 00000000        | 0       |
| 3 | 5 >> 3    | 00000000        | 0       |
| 2 | 5 >> 2    | 00000001        | 1       |
| 1 | 5 >> 1    | 00000010        | 2       |
| 0 | 5 >> 0    | 00000101        | 5       |



| i | (num >> i) | (num >> i) & 1 | Printed bit |
| - | ---------- | -------------- | ----------- |
| 7 | 00000000   | 0              | 0           |
| 6 | 00000000   | 0              | 0           |
| 5 | 00000000   | 0              | 0           |
| 4 | 00000000   | 0              | 0           |
| 3 | 00000000   | 0              | 0           |
| 2 | 00000001   | 1              | 1           |
| 1 | 00000010   | 0              | 0           |
| 0 | 00000101   | 1              | 1           |
**/


#include <stdio.h>

void printBinary(unsigned int num) {
    printf("Binary: ");
    for (int i = 7; i >= 0; i--) {  // 8-bit representation
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main() {
    unsigned int num;

    printf("Enter a number (0-255): ");
    scanf("%u", &num);

    printBinary(num);

    return 0;
}
