/*  Subtraction without using - operator 



🧠 Why This Works

We’re using the 2’s complement rule for representing negative numbers in binary.

🧩 Recall:
Negative of a number = 2’s complement = (~b + 1)


So:

a - b
= a + (-b)
= a + (2’s complement of b)
= a + (~b + 1)


That’s exactly what your code is doing. ✅

🧮 Example

Let’s take:

a = 9
b = 4


Step by step:

| Expression     | Binary (32-bit simplified) | Decimal        |
| -------------- | -------------------------- | -------------- |
| `b`            | 0000 0100                  | 4              |
| `~b`           | 1111 1011                  | (−5 in signed) |
| `~b + 1`       | 1111 1100                  | (−4 in signed) |
| `a + (~b + 1)` | 0000 1001 + 1111 1100      | 0000 0101 = 5  |


✅ Result = 5


*/

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Subtraction is: %d\n", a + ((~b) + 1));
    return 0;
}



/*
#include <stdio.h>

int main() {
    unsigned int a, b;

    printf("Enter first number (minuend): ");
    scanf("%u", &a);

    printf("Enter second number (subtrahend): ");
    scanf("%u", &b);

    while (b != 0) {
        unsigned int borrow = (~a) & b;   // bits that require borrow
        a = a ^ b;                        // difference without borrow
        b = borrow << 1;                  // borrow shifted to next higher bit
    }

    printf("\nSubtraction result (without '-') = %u\n", a);

    return 0;
}
*/
