/*  Swap of two numbers using bitwise operators in C programming language. 



Enter first number: 5
Enter second number: 9

Before swapping: a = 5, b = 9
After swapping:  a = 9, b = 5

*/






#include <stdio.h>

int main() {
    unsigned int a, b;

    printf("Enter first number: ");
    scanf("%u", &a);

    printf("Enter second number: ");
    scanf("%u", &b);

    printf("\nBefore swapping: a = %u, b = %u\n", a, b);

    // Bitwise XOR swap
    a = a ^ b;   // Step 1
    b = a ^ b;   // Step 2
    a = a ^ b;   // Step 3

    printf("After swapping:  a = %u, b = %u\n", a, b);

    return 0;
}


/*Let’s take an example:

a = 5 (0101)
b = 9 (1001)

Step 1️⃣

a = a ^ b
→ a = 0101 ^ 1001 = 1100 (12)

Now:

a = 12 (1100)
b = 9  (1001)

Step 2️⃣

b = a ^ b
→ b = 1100 ^ 1001 = 0101 (5)

Now:

a = 12 (1100)
b = 5  (0101)

Step 3️⃣

a = a ^ b
→ a = 1100 ^ 0101 = 1001 (9)

✅ Result:

a = 9, b = 5
*/